#pragma once

#include "../../../../../../pch.h"
enum eVsyncEx
{
    EVsyncEx_Off = 0,
    EVsyncEx_On = 1,
    EVsyncEx_Adaptive = 2,
    EVsyncEx_Triple = 3,
};
class cTkGraphicsDetailPreset;

enum eTextureStreamingVk
{
    ETextureStreamingVk_Off = 0,
    ETextureStreamingVk_On = 1,
    ETextureStreamingVk_Auto = 2,
    ETextureStreamingVk_NonDynamic = 3,
};

enum eHDRMode
{
    EHDRMode_Off = 0,
    EHDRMode_HDR400 = 1,
    EHDRMode_HDR600 = 2,
    EHDRMode_HDR1000 = 3,
};

class cTkGraphicsSettings
{
    static const unsigned __int64 muNameHash = 638939615057611390;
    static const unsigned __int64 muTemplateHash = 14091514562644018327;
    static const int miNumMembers = 28;

    int miVersion;
    bool mbFullScreen;
    bool mbBorderless;
    int miMonitor;
    cTkDynamicArray<cTkFixedString<256,char> > maMonitorNames;
    int miResolutionWidth;
    int miResolutionHeight;
    float mfResolutionScale;
    eVsyncEx meVsyncEx;
    cTkGraphicsDetailPreset mGraphicsDetail;
    float mfMotionBlurStrength;
    bool mbVignetteAndScanlines;
    float mfFoVOnFoot;
    float mfFoVInShip;
    int miBrightness;
    int miMaxframeRate;
    int miNumHighThreads;
    int miNumLowThreads;
    eTextureStreamingVk meTextureStreamingVk;
    bool mbShowRequirementsWarnings;
    bool mbRemoveBaseBuildingRestrictions;
    float mfMouseClickSpeedMultiplier;
    bool mbUseTerrainTextureCache;
    bool mbUseArbSparseTexture;
    eHDRMode meHDRMode;
    cTkFixedString<256,char> macAdapterName;
    int miAdapterIndex;
    int miNumGraphicsThreadsBeta;

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
