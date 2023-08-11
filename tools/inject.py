import pymem
import os
import _winapi
import ctypes

class SECURITY_ATTRIBUTES(ctypes.Structure):
    _fields_ = [
        ("nLength", ctypes.wintypes.DWORD),
        ("lpSecurityDescriptor", ctypes.wintypes.LPVOID),
        ("bInheritHandle", ctypes.wintypes.BOOL),
    ]

def start_process(binary_path: str, creationflags: int = 0x0):
    # Start an executable similarly to subprocess.Popen
    # The functionality here is ripped directly from that implementation,
    # however we don't discard the thread_handle here so that we may use it
    # again later to resume the thread if we pause it.
    proc_attr = SECURITY_ATTRIBUTES()
    proc_attr.bInheritHandle = True
    thread_attr = SECURITY_ATTRIBUTES()
    thread_attr.bInheritHandle = True
    # Start the process the internal way to get the thread handle.
    handle_process, handle_thread, pid, tid = _winapi.CreateProcess(
        None,
        binary_path,
        ctypes.byref(proc_attr),
        ctypes.byref(thread_attr),
        0,
        creationflags,
        None,
        None,
        None,
    )
    return (handle_process, handle_thread, pid, tid)

def inject_dll(handle, filepath):
    """Inject a dll into opened process.

    Parameters
    ----------
    handle: int
        Handle to an open object
    filepath: bytes
        Dll to be injected filepath

    Returns
    -------
    DWORD
        The address of injected dll
    """
    filepath_address = pymem.ressources.kernel32.VirtualAllocEx(
        handle,
        0,
        len(filepath),
        pymem.ressources.structure.MEMORY_STATE.MEM_COMMIT.value | pymem.ressources.structure.MEMORY_STATE.MEM_RESERVE.value,
        pymem.ressources.structure.MEMORY_PROTECTION.PAGE_EXECUTE_READWRITE.value
    )
    pymem.ressources.kernel32.WriteProcessMemory(handle, filepath_address, filepath, len(filepath), None)
    kernel32_handle = pymem.ressources.kernel32.GetModuleHandleW("kernel32.dll")
    load_library_a_address = pymem.ressources.kernel32.GetProcAddress(kernel32_handle, b"LoadLibraryA")
    thread_h = pymem.ressources.kernel32.CreateRemoteThread(
        handle, None, 0, load_library_a_address, filepath_address, 0, None
    )
    pymem.ressources.kernel32.WaitForSingleObject(thread_h, -1)
    pymem.ressources.kernel32.VirtualFreeEx(
        handle, filepath_address, len(filepath), pymem.ressources.structure.MEMORY_STATE.MEM_RELEASE.value
    )
    dll_name = os.path.basename(filepath)
    # dll_name = dll_name.decode('ascii')
    module_address = pymem.ressources.kernel32.GetModuleHandleW(dll_name)
    return module_address

hModule = start_process("D:/GOG Games/No Man's Sky/Binaries/NMS.exe", 0x4)
inject_dll(hModule[0], "D:/GOG Games/No Man's Sky/Binaries/Heridium.dll")