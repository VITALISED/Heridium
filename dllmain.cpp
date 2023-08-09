// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h" 

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    std::ifstream DumpedNames("D:/GOG Games/No Man's Sky/Binaries/names.txt");
    std::string line;

    cTkMetaDataXML::GetLookup lookup = (cTkMetaDataXML::GetLookup)OFFSET(0x2FA7D90);
    cTkMetaData::GetLookup lookup2 = (cTkMetaData::GetLookup)OFFSET(0x2FA7B90);

    while (std::getline(DumpedNames, line))
    {
        cTkMetaDataXMLFunctionLookup* val = lookup(line.c_str());

        if (val)
        {
            unsigned __int64 hash;

            unsigned __int64 hash1 = HASH_SEED;
            unsigned __int64 hash2 = HASH_SEED;

            SpookyHash::Hash128(val->mName.macBuffer , sizeof(val->mName.macBuffer), &hash1, &hash2);
            hash = hash1;

            cTkMetaDataFunctionLookup* val2 = lookup2(SpookyHash::Rot64(hash, 0x9DDFEA08EB382D69));

            if (val2)
            {
                spdlog::info(val2->mpClassMetadata->mpacName);
            }
        }
        else {
            spdlog::info("foiled {}", line);
        }
    }

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
        DisableThreadLibraryCalls(hModule);
        spdlog::set_level(spdlog::level::debug);
        MH_Initialize();
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

