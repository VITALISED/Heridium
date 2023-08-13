#pragma once
#include "pch.h"

class cGcAlienRace;
class cGcGalaxyStarAnomaly;
class cGcPlayerConflictData;
class cGcGalaxyStarTypes;
class cGcPlanetTradingData;
class cGcBiomeType;
class cGcBiomeSubType;

class cGcScanEventSolarSystemLookup
{
public:
    static const unsigned __int64 muNameHash = 0xE523CFAD6AFB4BB6;
    static const unsigned __int64 muTemplateHash = 0xDC65FBB3D6D18DC4;
    static const int miNumMembers = 32;

    bool mbUseStarType;
    bool mbUseWealth;
    bool mbUseTrading;
    cGcAlienRace mUseRace;
    cGcGalaxyStarAnomaly mUseAnomaly;
    cGcPlayerConflictData mUseConflict;
    cGcGalaxyStarTypes mStarType;
    cGcPlanetTradingData mTradingData;
    bool mbAllowUnsafeMatches;
    bool mbNeverAllowEmpty;
    bool mbNeverAllowAbandoned;
    bool mbRequireUndiscovered;
    bool mbNeedsWaterPlanet;
    bool mbNeedsPrimePlanet;
    bool mbNeedsSentinels;
    bool mbNeedsExtremeSentinelPlanet;
    bool mbNeverAllowExtremeSentinelPlanet;
    bool mbNeedsExtremeWeatherPlanet;
    bool mbNeedsExtremeHazardPlanet;
    bool mbAnyBiomeNotWeirdOrDead;
    bool mbAnyRGBBiome;
    bool mbAnyInfestedBiome;
    bool mbNeedsBiome;
    cGcBiomeType mNeedsBiomeType;
    cGcBiomeSubType mUseBiomeSubType;
    bool mbNeedsEmptySystem;
    bool mbNeedsAbandonedSystem;
    TkID<128> mNeedsResourceHint;
    bool mbSuitableForCreatureDiscovery;
    bool mbSuitableForCreatureTaming;
    TkID<256> mSamePlanetAsEvent;
    int miSamePlanetAsSeasonParty;

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
