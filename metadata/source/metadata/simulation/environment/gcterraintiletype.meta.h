#pragma once
#include "../../../../../../../pch.h"

enum eTileType
{
    ETileType_Air = 0,
    ETileType_Base = 1,
    ETileType_Rock = 2,
    ETileType_Mountain = 3,
    ETileType_Underwater = 4,
    ETileType_Cave = 5,
    ETileType_Dirt = 6,
    ETileType_Liquid = 7,
    ETileType_Substance = 8,
};

class cGcTerrainTileType
{
    static const unsigned __int64 muNameHash = 0x6247F06C43E3ADDD;
    static const unsigned __int64 muTemplateHash = 0x75811DA9180574C6;
    static const int miNumMembers = 1;

    eTileType meTileType;

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
