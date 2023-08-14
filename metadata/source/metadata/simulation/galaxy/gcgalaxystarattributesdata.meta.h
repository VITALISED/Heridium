#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystartypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystaranomaly.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetsize.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanettradingdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplayerconflictdata.meta.h"
#include "../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcGalaxyStarAttributesData
{
public:
    static const unsigned __int64 muNameHash = 0xEDE680300A536215;
    static const unsigned __int64 muTemplateHash = 0x636E887ED3223018;
    static const int miNumMembers = 13;

    cGcGalaxyStarTypes mType;
    cGcGalaxyStarAnomaly mAnomaly;
    int miNumberOfPlanets;
    int miNumberOfPrimePlanets;
    cTkFixedArray<cGcPlanetSize, 16> maPlanetSizes;
    cTkFixedArray<int, 16> maPlanetParentIndices;
    cTkFixedArray<cTkSeed, 16> maPlanetSeeds;
    cGcPlanetTradingData mTradingData;
    cGcPlayerConflictData mConflictData;
    cGcAlienRace mRace;
    bool mbAbandonedSystem;
    bool mbIsPirateSystem;
    bool mbIsSystemSafe;

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
