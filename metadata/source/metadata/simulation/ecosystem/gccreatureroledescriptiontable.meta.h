#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreatureroledescription.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcterraintiletype.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcplanetlife.meta.h"

class cGcCreatureRoleDescriptionTable
{
public:
    static const unsigned __int64 muNameHash = 0xBCFEFAC14ECD961B;
    static const unsigned __int64 muTemplateHash = 0x3BCE966DA1F26340;
    static const int miNumMembers = 5;

    cTkDynamicArray<cGcCreatureRoleDescription> maRoleDescription;
    float mfMinScaleVariance;
    float mfMaxScaleVariance;
    cGcTerrainTileType mTileType;
    cGcPlanetLife mLifeLevel;

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
