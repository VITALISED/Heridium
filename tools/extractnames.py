# Stolen from monkeyman, get owned

import pathlib
import re
import struct
import os

MODULE_BASE = 0x140000000

def find_classes(nms_path: pathlib.Path):
    with open(nms_path, 'rb') as f:
        data = f.read()

        rdata_hdr = data.find(b'.rdata')
        rdata_size, rdata_offset, _, ptr_address = struct.unpack_from(
            '<IIII',
            data,
            offset=rdata_hdr + 8
        )

        virtual_offset = rdata_offset - ptr_address

        subdata = data[rdata_offset: rdata_offset + rdata_size]

        for m in re.finditer(b'(c((?:Gc)|(?:Tk))\w+)\x00', data, flags=re.IGNORECASE):
            name = m[0].strip(b'\x00').decode()
            if not name.startswith('c'):
                continue
            addr = m.span()[0] + virtual_offset + MODULE_BASE
            found_addr = subdata.find(struct.pack('<Q', addr))
            if found_addr != -1:
                found_addr += rdata_offset
                yield name, found_addr + virtual_offset

file = open("./names.txt", "w")

for name, offset in find_classes("D:/GOG Games/No Man's Sky/Binaries/NMS.exe"):
    file.write(name + "\n")

file.close()