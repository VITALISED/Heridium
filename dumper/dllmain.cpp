// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h" 

cTkMetaData::Register fpRegister = NULL;

void RegisterHook(const cTkMetaDataClass* lpClassMetadata,
    void(__fastcall* lDefaultFunction)(cTkClassPointer*, cTkLinearMemoryPool*),
    void(__fastcall* lFixingFunction)(cTkClassPointer*, bool, unsigned __int64),
    void(__fastcall* lValidateFunction)(cTkClassPointer*),
    void(__fastcall* lRenderFunction)(cTkClassPointer*),
    bool(__fastcall* lEqualsFunction)(const cTkClassPointer*, const cTkClassPointer*),
    void(__fastcall* lCopyFunction)(cTkClassPointer*, const cTkClassPointer*),
    cTkClassPointer* (__fastcall* lCreateFunction)(cTkClassPointer* result),
    unsigned __int64(__fastcall* lHashFunction)(const cTkClassPointer*, unsigned __int64, bool),
    void(__fastcall* lDestroyFunction)(cTkClassPointer*))
{
    std::string key = lpClassMetadata->mpacName;

    if (key.find_first_of("c") != std::string::npos)
    {
        key = key.substr(key.find_first_of("c"));
    }

    std::transform(key.begin(), key.end(), key.begin(),
        [](unsigned char c) { return std::tolower(c); });

    std::string pathOptional = "/metadata/unmapped/" + key + ".meta.h";

    for (int i = 0; i < classPaths.size(); i++)
    {
        if (classPaths[i].first == key)
            pathOptional = classPaths[i].second;
    }
    Dumper::Dump(pathOptional.c_str(), lpClassMetadata);

    // we can't call GetLookup since this func comes before it, bit hacky.
    std::vector<uintptr_t> classPointerFuncs =
    {
        (uintptr_t)lDefaultFunction,
        (uintptr_t)lFixingFunction,
        (uintptr_t)lValidateFunction,
        (uintptr_t)lRenderFunction,
        (uintptr_t)lEqualsFunction,
        (uintptr_t)lCopyFunction,
        (uintptr_t)lCreateFunction,
        (uintptr_t)lHashFunction,
        (uintptr_t)lDestroyFunction
    };

    MethodDumper::Dump(pathOptional.c_str(), lpClassMetadata, &classPointerFuncs);
    return fpRegister(lpClassMetadata, lDefaultFunction, lFixingFunction, lValidateFunction, lRenderFunction, lEqualsFunction, lCopyFunction, lCreateFunction, lHashFunction, lDestroyFunction);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    spdlog::info("Starting");
    ADDHOOK(OFFSET(0x248ABC0), RegisterHook, reinterpret_cast<LPVOID*>(&fpRegister), cTkMetaData::Register);

    std::ofstream PrimaryHeader("./HERIDIUM/heridium.h");

    PrimaryHeader << "#pragma once\n\n";
    for (int i = 0; i < classPaths.size(); i++)
    {
        PrimaryHeader << "#include \""; PrimaryHeader << classPaths[i].second; PrimaryHeader << "\"\n";
    }
    PrimaryHeader.close();


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
        AllocConsole();
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

