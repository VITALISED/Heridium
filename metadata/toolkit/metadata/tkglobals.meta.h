#pragma once
#include "../../../pch.h"

enum eAssertsLevel
{
    EAssertsLevel_Disabled = 0,
    EAssertsLevel_Ignored = 1,
    EAssertsLevel_Skipped = 2,
    EAssertsLevel_Enabled = 3,
};

enum exEnabledChannels
{
    EEnabledChannels_Default = 1,
    EEnabledChannels_Note = 2,
    EEnabledChannels_Error = 4,
    EEnabledChannels_Warning = 8,
    EEnabledChannels_Info = 16,
    EEnabledChannels_Alt = 32,
    EEnabledChannels_AltWarn = 64,
    EEnabledChannels_AltError = 128,
};

class cTkGlobals
{
public:
    static const unsigned __int64 muNameHash = 0xB62E6456DFE47836;
    static const unsigned __int64 muTemplateHash = 0x91DC0B006B334CE8;
    static const int miNumMembers = 18;

    eAssertsLevel meAssertsLevel;
    bool mbDefaultSelectIgnoreAsserts;
    exEnabledChannels mexEnabledChannels;
    cTkFixedString<256,char> macIncludeLogFilter;
    cTkFixedString<256,char> macExcludeLogFilter;
    int miLoadBalanceTimeoutMS;
    int miVRLoadBalanceTimeoutMS;
    int miPSVR2LoadBalanceTimeoutMS;
    bool mbLogInputSetup;
    bool mbLogInputChanges;
    bool mbDisableResScaling;
    int miLODOverride;
    bool mbColourLODs;
    float mfWwiseVibrationMultiplierPrimary;
    float mfWwiseVibrationMultiplierSecondary;
    bool mbUseHeavyAir;
    bool mbSimulateDisabledParticleRefractions;
    bool mbDisableMultiplayer;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
