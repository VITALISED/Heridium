#pragma once

#include "../../../../../../../../pch.h"
class cGcWeatherOptions;
class cGcPlanetHeavyAirData;

enum eWeatherIntensity
{
    EWeatherIntensity_Default = 0,
    EWeatherIntensity_Extreme = 1,
};

enum eStormFrequency
{
    EStormFrequency_None = 0,
    EStormFrequency_Low = 1,
    EStormFrequency_High = 2,
};

enum eAtmosphereType
{
    EAtmosphereType_None = 0,
    EAtmosphereType_Normal = 1,
};
class cGcScreenFilters;
class cGcScreenFilters;
class cGcRainbowType;

class cGcPlanetWeatherData
{
    static const unsigned __int64 muNameHash = 17001242395629249452;
    static const unsigned __int64 muTemplateHash = 7634659029366326862;
    static const int miNumMembers = 11;

    cGcWeatherOptions mWeatherType;
    cGcPlanetHeavyAirData mHeavyAir;
    eWeatherIntensity meWeatherIntensity;
    eStormFrequency meStormFrequency;
    eAtmosphereType meAtmosphereType;
    int miDayColourIndex;
    int miDuskColourIndex;
    cGcScreenFilters mScreenFilter;
    cGcScreenFilters mStormScreenFilter;
    cGcRainbowType mRainbowType;
    int miNightColourIndex;

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