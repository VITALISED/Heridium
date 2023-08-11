import os

with open("input.txt") as file:
    buf = "#pragma once\n\nstd::vector<std::pair<const char*, const char*> > classPaths = {\n"
    for item in file:
        item = item.strip()
        if not(len(item) == 0):
            className = os.path.split(item)[1]

            strippedFilePath = className[0:className.find(".meta.h")] 

            buf += "        std::pair<const char*, const char*>(\"%s\", \"%s\"),\n" % ("c" + strippedFilePath, item)
    buf += "}"
    file.close()

output = open("output.txt", "w")
output.write(buf)
output.close()