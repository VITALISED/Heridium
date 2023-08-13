#pragma once

#include "../../../../../../../../pch.h"
class cGcGalaxyStarTypes;
class cGcPlanetClass;
class cGcPlanetSize;
class cGcBiomeType;
class cGcBiomeSubType;

class cGcPlanetGenerationInputData
{
    static const unsigned __int64 muNameHash = 3320870750853206293;
    static const unsigned __int64 muTemplateHash = 11499228120692769458;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
