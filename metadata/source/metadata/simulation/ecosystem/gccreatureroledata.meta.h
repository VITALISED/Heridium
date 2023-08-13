#pragma once
#include "../../../../../../../pch.h"

class cGcCreatureTypes;
class cGcCreatureRoleDescription;
class cGcCreatureInfo;
class cGcTerrainTileType;
class cGcCreatureDiet;
class cGcCreatureHemiSphere;

class cGcCreatureRoleData
{
    static const unsigned __int64 muNameHash = 0x3330409D2B3F48C1;
    static const unsigned __int64 muTemplateHash = 0x814F1020C18B16EE;
    static const int miNumMembers = 10;

    cTkSeed mSeed;
    cGcCreatureTypes mType;
    TkID<128> mCreatureId;
    cGcCreatureRoleDescription mDescription;
    cGcCreatureInfo mInfo;
    cGcTerrainTileType mTileType;
    cGcCreatureDiet mDiet;
    float mfGroupsPerSquareKm;
    cGcCreatureHemiSphere mHemiSphere;
    TkID<256> mFilter;

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
