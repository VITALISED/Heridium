#pragma once
#include "../../../../../../../pch.h"

enum eFlattening
{
    EFlattening_None = 0,
    EFlattening_Flatten = 1,
    EFlattening_TerrainEdits = 2,
};

enum eWaterPlacement
{
    EWaterPlacement_None = 0,
    EWaterPlacement_OnWater = 1,
    EWaterPlacement_Underwater = 2,
    EWaterPlacement_UnderwaterOnly = 3,
};

class cTkNoiseFlattenOptions
{
    static const unsigned __int64 muNameHash = 0xB92478FDE531276E;
    static const unsigned __int64 muTemplateHash = 0x34687CDAF17A671D;
    static const int miNumMembers = 2;

    eFlattening meFlattening;
    eWaterPlacement meWaterPlacement;

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
