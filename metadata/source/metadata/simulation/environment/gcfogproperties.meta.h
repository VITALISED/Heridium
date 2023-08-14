#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcheavyairsetting.meta.h"

class cGcFogProperties
{
public:
    static const unsigned __int64 muNameHash = 0x32F1C073DAE21750;
    static const unsigned __int64 muTemplateHash = 0x35844421A6C552B4;
    static const int miNumMembers = 17;

    float mfFogStrength;
    float mfFogMax;
    float mfFogColourStrength;
    float mfFogColourMax;
    float mfHeightFogStrength;
    float mfHeightFogFadeOutStrength;
    float mfHeightFogOffset;
    float mfHeightFogMax;
    float mfFogHeight;
    cGcHeavyAirSetting mHeavyAir;
    float mfCloudRatio;
    float mfFullscreenEffect;
    float mfDepthOfField;
    float mfDepthOfFieldDistance;
    float mfDepthOfFieldFade;
    bool mbIsRaining;
    float mfRainWetness;

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
