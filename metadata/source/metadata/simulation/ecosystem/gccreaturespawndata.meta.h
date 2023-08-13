#pragma once

#include "../../../../../../../pch.h"
class cGcResourceElement;
class cGcResourceElement;
class cGcResourceElement;
class cGcTerrainTileType;
class cGcCreatureTypes;
class cGcCreatureRoles;
class cGcCreatureHemiSphere;
class cGcRarity;

class cGcCreatureSpawnData
{
    static const unsigned __int64 muNameHash = 1705787391395361398;
    static const unsigned __int64 muTemplateHash = 15439459362270774039;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
