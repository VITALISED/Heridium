#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcterraintiletype.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreatureroles.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturehemisphere.meta.h"
#include "../../../../../metadata/source/metadata/reality/gcrarity.meta.h"

class cGcCreatureSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0x17AC2C984675F276;
    static const unsigned __int64 muTemplateHash = 0xD643FA7CFC3A8317;
    static const int miNumMembers = 24;

    cGcResourceElement mResource;
    cGcResourceElement mFemaleResource;
    cGcResourceElement mExtraResource;
    cGcTerrainTileType mTileType;
    bool mbSwapPrimaryForSecondaryColour;
    bool mbSwapPrimaryForRandomColour;
    float mfMinScale;
    float mfMaxScale;
    TkID<128> mCreatureID;
    cGcCreatureTypes mCreatureType;
    cGcCreatureRoles mCreatureRole;
    TkID<256> mFilter;
    int miCreatureMinGroupSize;
    int miCreatureMaxGroupSize;
    float mfCreatureGroupsPerSquareKm;
    cGcCreatureHemiSphere mHemiSphere;
    float mfCreatureSpawnDistance;
    float mfCreatureDespawnDistance;
    float mfCreatureActiveInDayChance;
    float mfCreatureActiveInNightChance;
    cGcRarity mRarity;
    bool mbAllowFur;
    bool mbHerd;
    int miRoleDataIndex;

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
