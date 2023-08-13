#pragma once

#include "../../../../../../../pch.h"
class cGcHeavyAirSetting;

class cGcFogProperties
{
    static const unsigned __int64 muNameHash = 3670926775109687120;
    static const unsigned __int64 muTemplateHash = 3856282092258546356;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};