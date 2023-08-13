#pragma once

#include "../../../../../../pch.h"
enum eEngineSetting
{
    EEngineSetting_FullScreen = 0,
    EEngineSetting_Borderless = 1,
    EEngineSetting_ResolutionWidth = 2,
    EEngineSetting_ResolutionHeight = 3,
    EEngineSetting_ResolutionScale = 4,
    EEngineSetting_Monitor = 5,
    EEngineSetting_FoVOnFoot = 6,
    EEngineSetting_FoVInShip = 7,
    EEngineSetting_VSync = 8,
    EEngineSetting_TextureQuality = 9,
    EEngineSetting_AnimationQuality = 10,
    EEngineSetting_ShadowQuality = 11,
    EEngineSetting_ReflectionsMultiplier = 12,
    EEngineSetting_ReflectionProbesMultiplier = 13,
    EEngineSetting_ReflectionProbes = 14,
    EEngineSetting_ScreenSpaceReflections = 15,
    EEngineSetting_ReflectionsQuality = 16,
    EEngineSetting_PostProcessingEffects = 17,
    EEngineSetting_VolumetricsQuality = 18,
    EEngineSetting_TerrainTessellation = 19,
    EEngineSetting_PlanetQuality = 20,
    EEngineSetting_BaseQuality = 21,
    EEngineSetting_UIQuality = 22,
    EEngineSetting_DLSSQuality = 23,
    EEngineSetting_FFXSRQuality = 24,
    EEngineSetting_FFXSR2Quality = 25,
    EEngineSetting_XESSQuality = 26,
    EEngineSetting_DynamicResScaling = 27,
    EEngineSetting_EnableTessellation = 28,
    EEngineSetting_AntiAliasing = 29,
    EEngineSetting_AnisotropyLevel = 30,
    EEngineSetting_Brightness = 31,
    EEngineSetting_VignetteAndScanlines = 32,
    EEngineSetting_AvailableMonitors = 33,
    EEngineSetting_MaxFrameRate = 34,
    EEngineSetting_NumLowThreads = 35,
    EEngineSetting_NumHighThreads = 36,
    EEngineSetting_NumGraphicsThreads = 37,
    EEngineSetting_TextureStreaming = 38,
    EEngineSetting_TexturePageSizeKb = 39,
    EEngineSetting_MotionBlurStrength = 40,
    EEngineSetting_ShowRequirementsWarnings = 41,
    EEngineSetting_AmbientOcclusion = 42,
    EEngineSetting_MaxTextureMemoryMb = 43,
    EEngineSetting_FixedTextureMemory = 44,
    EEngineSetting_UseArbSparseTexture = 45,
    EEngineSetting_UseTerrainTextureCache = 46,
    EEngineSetting_AdapterIndex = 47,
    EEngineSetting_UseHDR = 48,
    EEngineSetting_MinGPUMode = 49,
};

class cTkEngineSettingTypes
{
    static const unsigned __int64 muNameHash = 10680645320526537238;
    static const unsigned __int64 muTemplateHash = 7227016457567490099;
    static const int miNumMembers = 1;

    eEngineSetting meEngineSetting;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
