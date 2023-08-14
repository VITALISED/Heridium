#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystaranomaly.meta.h"
#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplayerconflictdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystartypes.meta.h"
#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanettradingdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiomesubtype.meta.h"

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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
