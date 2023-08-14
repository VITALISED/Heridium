#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/environment/gcfogproperties.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/weather/gcweathercolourmodifiers.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcstormproperties.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/weather/gchazardvalues.meta.h"
#include "../../../../../../metadata/source/metadata/graphics/gcscreenfilters.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcskyproperties.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gclightshaftproperties.meta.h"

class cGcWeatherProperties
{
public:
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
    cTkFixedArray<float, 4> maRainbowChance;
    cTkDynamicArray<cGcStormProperties> maStorms;
    cTkDynamicArray<cTkFixedString<128,char> > maHeavyAir;
    float mfLowStormsChance;
    float mfHighStormsChance;
    float mfExtremeWeatherChance;
    bool mbOverrideTemperature;
    cTkFixedArray<cGcHazardValues, 5> maTemperature;
    bool mbOverrideToxicity;
    cTkFixedArray<cGcHazardValues, 5> maToxicity;
    bool mbOverrideRadiation;
    cTkFixedArray<cGcHazardValues, 5> maRadiation;
    cTkFixedArray<cGcHazardValues, 5> maLifeSupportDrain;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
