#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreaturetypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreatureroledescription.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/creatures/gccreatureinfo.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcterraintiletype.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturediet.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturehemisphere.meta.h"

class cGcCreatureRoleData
{
public:
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
