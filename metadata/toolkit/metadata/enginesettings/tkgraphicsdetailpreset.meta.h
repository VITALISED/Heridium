#pragma once
#include "../../../../../../pch.h"

class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;
class cTkGraphicsDetailTypes;

enum eUIQuality
{
    EUIQuality_Normal = 0,
    EUIQuality_4K = 1,
};

enum eDLSSQuality
{
    EDLSSQuality_MaxPerformance = 0,
    EDLSSQuality_Balanced = 1,
    EDLSSQuality_MaxQuality = 2,
    EDLSSQuality_UltraPerformance = 3,
    EDLSSQuality_UltraQuality = 4,
};

enum eFFXSRQuality
{
    EFFXSRQuality_Off = 0,
    EFFXSRQuality_UltraQuality = 1,
    EFFXSRQuality_Quality = 2,
    EFFXSRQuality_Balanced = 3,
    EFFXSRQuality_Performance = 4,
};

enum eFFXSR2Quality
{
    EFFXSR2Quality_UltraPerformance = 0,
    EFFXSR2Quality_Performance = 1,
    EFFXSR2Quality_Balanced = 2,
    EFFXSR2Quality_Quality = 3,
};

enum eXESSQuality
{
    EXESSQuality_UltraPerformance = 0,
    EXESSQuality_Performance = 1,
    EXESSQuality_Balanced = 2,
    EXESSQuality_MaxQuality = 3,
    EXESSQuality_UltraQuality = 4,
};

enum eAmbientOcclusion
{
    EAmbientOcclusion_Off = 0,
    EAmbientOcclusion_GTAO_Low = 1,
    EAmbientOcclusion_GTAO_Medium = 2,
    EAmbientOcclusion_GTAO_High = 3,
    EAmbientOcclusion_GTAO_Ultra = 4,
    EAmbientOcclusion_HBAO_Low = 5,
    EAmbientOcclusion_HBAO_High = 6,
};

enum eAnisotropyLevel
{
    EAnisotropyLevel_1 = 0,
    EAnisotropyLevel_2 = 1,
    EAnisotropyLevel_4 = 2,
    EAnisotropyLevel_8 = 3,
    EAnisotropyLevel_16 = 4,
};

enum eAntiAliasing
{
    EAntiAliasing_None = 0,
    EAntiAliasing_TAA_LOW = 1,
    EAntiAliasing_TAA = 2,
    EAntiAliasing_FXAA = 3,
    EAntiAliasing_FFXSR2 = 4,
    EAntiAliasing_DLSS = 5,
    EAntiAliasing_DLAA = 6,
    EAntiAliasing_XESS = 7,
};
class cTkDynamicResScalingSettings;

class cTkGraphicsDetailPreset
{
    static const unsigned __int64 muNameHash = 0x56E0EB96EB3713F0;
    static const unsigned __int64 muTemplateHash = 0xB319768677055F79;
    static const int miNumMembers = 18;

    cTkGraphicsDetailTypes mTextureQuality;
    cTkGraphicsDetailTypes mAnimationQuality;
    cTkGraphicsDetailTypes mShadowQuality;
    cTkGraphicsDetailTypes mPostProcessingEffects;
    cTkGraphicsDetailTypes mReflectionsQuality;
    cTkGraphicsDetailTypes mVolumetricsQuality;
    cTkGraphicsDetailTypes mTerrainTessellation;
    cTkGraphicsDetailTypes mPlanetQuality;
    cTkGraphicsDetailTypes mBaseQuality;
    eUIQuality meUIQuality;
    eDLSSQuality meDLSSQuality;
    eFFXSRQuality meFFXSRQuality;
    eFFXSR2Quality meFFXSR2Quality;
    eXESSQuality meXESSQuality;
    eAmbientOcclusion meAmbientOcclusion;
    eAnisotropyLevel meAnisotropyLevel;
    eAntiAliasing meAntiAliasing;
    cTkDynamicResScalingSettings mDynamicResScalingSettings;

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
