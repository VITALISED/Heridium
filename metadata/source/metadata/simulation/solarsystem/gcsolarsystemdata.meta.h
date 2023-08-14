#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcsolarsystemclass.meta.h"
#include "../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystartypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetgenerationinputdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/gcspacestationspawndata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/gcsolarsystemtraderspawndata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/gcsolarsystemlocator.meta.h"

enum eAsteroidLevel
{
    EAsteroidLevel_NoRares = 0,
    EAsteroidLevel_SomeRares = 1,
    EAsteroidLevel_LotsOfRares = 2,
};
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetcolourdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gclightproperties.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcspaceskyproperties.meta.h"
#include "../../../../../metadata/source/metadata/graphics/gcscreenfilters.meta.h"
#include "../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshippreloadcachedata.meta.h"
#include "../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanettradingdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplayerconflictdata.meta.h"

class cGcSolarSystemData
{
public:
    static const unsigned __int64 muNameHash = 0x9B09276BB2795541;
    static const unsigned __int64 muTemplateHash = 0xA2E4A21CCF757F1A;
    static const int miNumMembers = 35;

    cTkSeed mSeed;
    cTkFixedString<128,char> macName;
    cGcSolarSystemClass mClass;
    cGcGalaxyStarTypes mStarType;
    int miPlanets;
    cTkFixedArray<cTkVector3, 8> maPlanetPositions;
    cTkFixedArray<cGcPlanetGenerationInputData, 8> maPlanetGenerationInputs;
    cTkFixedArray<int, 8> maPlanetOrbits;
    int miPrimePlanets;
    cTkVector3 mSunPosition;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
