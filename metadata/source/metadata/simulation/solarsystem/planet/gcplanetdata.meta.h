#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/environment/gcplanetlife.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanethazarddata.meta.h"

enum eResourceLevel
{
    EResourceLevel_Low = 0,
    EResourceLevel_High = 1,
};
#include "../../../../../../metadata/source/metadata/simulation/environment/gcbuildingdensitylevels.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetdataresourcehint.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetcolourdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetweatherdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcplanetcloudproperties.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetwaterdata.meta.h"
#include "../../../../../../metadata/toolkit/metadata/voxel/generator/tkvoxelgeneratordata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcenvironmentspawndata.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/gcplanetbuildingdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetgenerationintermediatedata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetinfo.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetsentineldata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetringdata.meta.h"

class cGcPlanetData
{
public:
    static const unsigned __int64 muNameHash = 0x25EDFA0EC4C3AF0A;
    static const unsigned __int64 muTemplateHash = 0x2DC122FA5D947C91;
    static const int miNumMembers = 31;

    cTkFixedString<128,char> macName;
    cGcPlanetLife mLife;
    cGcPlanetLife mCreatureLife;
    cGcPlanetHazardData mHazard;
    eResourceLevel meResourceLevel;
    cGcBuildingDensityLevels mBuildingLevel;
    TkID<128> mCommonSubstanceID;
    TkID<128> mUncommonSubstanceID;
    TkID<128> mRareSubstanceID;
    cTkDynamicArray<cGcPlanetDataResourceHint> maExtraResourceHints;
    cGcPlanetColourData mColours;
    cTkFixedArray<cTkColour, 23> maTileColours;
    cGcPlanetWeatherData mWeather;
    cGcPlanetCloudProperties mClouds;
    cGcPlanetWaterData mWater;
    cTkFixedString<128,char> macTerrainFile;
    cTkVoxelGeneratorData mTerrain;
    int miTileTypeSet;
    cTkDynamicArray<int> maTileTypeIndices;
    cGcEnvironmentSpawnData mSpawnData;
    cGcAlienRace mInhabitingRace;
    cGcPlanetBuildingData mBuildingData;
    cGcPlanetGenerationIntermediateData mGenerationData;
    cTkVector2 mSentinelTimer;
    cTkVector2 mFlybyTimer;
    cGcPlanetInfo mPlanetInfo;
    cGcPlanetSentinelData mSentinelData;
    cGcPlanetRingData mRings;
    bool mbInEmptySystem;
    bool mbInAbandonedSystem;
    float mfFuelMultiplier;

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
