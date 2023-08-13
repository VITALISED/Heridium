#pragma once

#include "../../../../../../../../pch.h"
class cGcPlanetLife;
class cGcPlanetLife;
class cGcPlanetHazardData;

enum eResourceLevel
{
    EResourceLevel_Low = 0,
    EResourceLevel_High = 1,
};
class cGcBuildingDensityLevels;
class cGcPlanetColourData;
class cGcPlanetWeatherData;
class cGcPlanetCloudProperties;
class cGcPlanetWaterData;
class cTkVoxelGeneratorData;
class cGcEnvironmentSpawnData;
class cGcAlienRace;
class cGcPlanetBuildingData;
class cGcPlanetGenerationIntermediateData;
class cGcPlanetInfo;
class cGcPlanetSentinelData;
class cGcPlanetRingData;

class cGcPlanetData
{
    static const unsigned __int64 muNameHash = 2733115490221403914;
    static const unsigned __int64 muTemplateHash = 3296954860919094417;
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
    cTkFixedArray<cTkColour> maTileColours;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
