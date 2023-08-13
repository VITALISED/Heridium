#pragma once
#include "../../../../../../../pch.h"

class cGcGalaxyStarTypes;
class cGcGalaxyStarAnomaly;
class cGcPlanetTradingData;
class cGcPlayerConflictData;
class cGcAlienRace;

class cGcGalaxyStarAttributesData
{
    static const unsigned __int64 muNameHash = 0xEDE680300A536215;
    static const unsigned __int64 muTemplateHash = 0x636E887ED3223018;
    static const int miNumMembers = 13;

    cGcGalaxyStarTypes mType;
    cGcGalaxyStarAnomaly mAnomaly;
    int miNumberOfPlanets;
    int miNumberOfPrimePlanets;
    cTkFixedArray<cGcPlanetSize> maPlanetSizes;
    cTkFixedArray<int> maPlanetParentIndices;
    cTkFixedArray<cTkSeed> maPlanetSeeds;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
