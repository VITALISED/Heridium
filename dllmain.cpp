// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h"

cTkMetaData::GetLookup fpGetLookup = NULL;

cTkMetaDataFunctionLookup* GetLookupHook(unsigned __int64 luiNameHash)
{
    cTkMetaDataFunctionLookup* result = fpGetLookup(luiNameHash);

    const char* val = result->mpClassMetadata->mpacName;

    spdlog::info("Metadata classname: {}", val);
 
    return result;
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    ADDHOOK(OFFSET(0x2487860), GetLookupHook, reinterpret_cast<LPVOID*>(&fpGetLookup), cTkMetaData::GetLookup);

    return TRUE;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MH_Initialize();
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

