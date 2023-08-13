#pragma once

#include "../../../../../../../pch.h"
class cGcSolarSystemClass;
class cGcGalaxyStarTypes;
class cGcSpaceStationSpawnData;
class cGcSolarSystemTraderSpawnData;
class cGcSolarSystemTraderSpawnData;

enum eAsteroidLevel
{
    EAsteroidLevel_NoRares = 0,
    EAsteroidLevel_SomeRares = 1,
    EAsteroidLevel_LotsOfRares = 2,
};
class cGcPlanetColourData;
class cGcLightProperties;
class cGcSpaceSkyProperties;
class cGcScreenFilters;
class cGcAlienRace;
class cGcPlanetTradingData;
class cGcPlayerConflictData;

class cGcSolarSystemData
{
    static const unsigned __int64 muNameHash = 11171503694178506049;
    static const unsigned __int64 muTemplateHash = 11737684773457723162;
    static const int miNumMembers = 35;

    cTkSeed mSeed;
    cTkFixedString<128,char> macName;
    cGcSolarSystemClass mClass;
    cGcGalaxyStarTypes mStarType;
    int miPlanets;
    cTkFixedArray<cTkVector> maPlanetPositions;
    cTkFixedArray<cGcPlanetGenerationInputData> maPlanetGenerationInputs;
    cTkFixedArray<int> maPlanetOrbits;
    int miPrimePlanets;
    cTkVector mSunPosition;
    TkID<128> mAsteroidSubstanceID;
    int miNumTradeRoutes;
    int miNumVisibleTradeRoutes;
    int miMaxNumFreighters;
    bool mbStartWithFreighters;
    cTkVector2 mFreighterTimer;
    cTkVector2 mSpacePirateTimer;
    cTkVector2 mPlanetPirateTimer;
    cTkVector2 mFlybyTimer;
    cTkVector2 mPoliceTimer;
    cGcSpaceStationSpawnData mSpaceStationSpawn;
    cGcSolarSystemTraderSpawnData mTraderSpawnOnOutposts;
    cGcSolarSystemTraderSpawnData mTraderSpawnInStations;
    cTkDynamicArray<cGcSolarSystemLocator> maLocators;
    cTkDynamicArray<cTkClassPointer> maAsteroidGenerators;
    eAsteroidLevel meAsteroidLevel;
    cGcPlanetColourData mColours;
    cGcLightProperties mLight;
    cGcSpaceSkyProperties mSky;
    cGcScreenFilters mScreenFilter;
    cTkFixedString<128,char> macHeavyAir;
    cTkDynamicArray<cGcAISpaceshipPreloadCacheData> maSystemShips;
    cGcAlienRace mInhabitingRace;
    cGcPlanetTradingData mTradingData;
    cGcPlayerConflictData mConflictData;

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
