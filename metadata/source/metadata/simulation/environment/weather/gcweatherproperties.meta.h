#pragma once
#include "pch.h"

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
    cTkDynamicArray<cGcStormProperties1> maStorms;
    cTkDynamicArray<cTkFixedString<128,char>1> maHeavyAir;
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
    cTkDynamicArray<cGcScreenFilters1> maStormFilterOptions;
    bool mbUseWeatherSky;
    cGcSkyProperties mSky;
    bool mbUseLightShaftProperties;
    cGcLightShaftProperties mLightShaftProperties;
    bool mbUseStormLightShaftProperties;
    cGcLightShaftProperties mStormLightShaftProperties;
    cTkDynamicArray<TkID<128>1> maWeatherEffectsIds;
    cTkDynamicArray<TkID<128>1> maWeatherHazardsIds;

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
