#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/environment/weather/gcweatheroptions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetheavyairdata.meta.h"

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
#include "../../../../../../metadata/source/metadata/graphics/gcscreenfilters.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcrainbowtype.meta.h"

class cGcPlanetWeatherData
{
public:
    static const unsigned __int64 muNameHash = 0xEBF08BE1E3CAE3AC;
    static const unsigned __int64 muTemplateHash = 0x69F3C1EFE29BC64E;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
