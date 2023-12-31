#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/galaxy/gcgalaxystartypes.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetclass.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcplanetsize.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiometype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiomesubtype.meta.h"

class cGcPlanetGenerationInputData
{
public:
    static const unsigned __int64 muNameHash = 0x2E161A5A69971115;
    static const unsigned __int64 muTemplateHash = 0x9F95770CDD1342B2;
    static const int miNumMembers = 15;

    cTkSeed mSeed;
    cGcGalaxyStarTypes mStar;
    cGcPlanetClass mClass;
    TkID<128> mCommonSubstance;
    TkID<128> mRareSubstance;
    cGcPlanetSize mPlanetSize;
    cGcBiomeType mBiome;
    cGcBiomeSubType mBiomeSubType;
    bool mbHasRings;
    bool mbForceContinents;
    bool mbInEmptySystem;
    bool mbInAbandonedSystem;
    bool mbInPirateSystem;
    bool mbPrime;
    int miRealityIndex;

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
