#pragma once
#include "../../../../../../../../pch.h"

class cGcFogProperties;
class cGcFogProperties;
class cGcFogProperties;
class cGcFogProperties;
class cGcWeatherColourModifiers;
class cGcSkyProperties;
class cGcLightShaftProperties;
class cGcLightShaftProperties;

class cGcWeatherProperties
{
    static const unsigned __int64 muNameHash = 0xD216CE8E772352C;
    static const unsigned __int64 muTemplateHash = 0xBDD9439B9B595EF6;
    static const int miNumMembers = 29;

    TkID<128> mName;
    bool mbUseWeatherFog;
    cGcFogProperties mFog;
    cGcFogProperties mFlightFog;
    cGcFogProperties mStormFog;
    cGcFogProperties mExtremeFog;
    cGcWeatherColourModifiers mExtremeColourModifiers;
    cTkFixedArray<float> maRainbowChance;
    cTkDynamicArray<cGcStormProperties> maStorms;
    cTkDynamicArray<cTkFixedString<128,char> > maHeavyAir;
    float mfLowStormsChance;
    float mfHighStormsChance;
    float mfExtremeWeatherChance;
    bool mbOverrideTemperature;
    cTkFixedArray<cGcHazardValues> maTemperature;
    bool mbOverrideToxicity;
    cTkFixedArray<cGcHazardValues> maToxicity;
    bool mbOverrideRadiation;
    cTkFixedArray<cGcHazardValues> maRadiation;
    cTkFixedArray<cGcHazardValues> maLifeSupportDrain;
    cTkDynamicArray<cGcScreenFilters> maStormFilterOptions;
    bool mbUseWeatherSky;
    cGcSkyProperties mSky;
    bool mbUseLightShaftProperties;
    cGcLightShaftProperties mLightShaftProperties;
    bool mbUseStormLightShaftProperties;
    cGcLightShaftProperties mStormLightShaftProperties;
    cTkDynamicArray<TkID<128> > maWeatherEffectsIds;
    cTkDynamicArray<TkID<128> > maWeatherHazardsIds;

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
