#pragma once

#include "../../../../../../../pch.h"
enum egcwordcategorytableEnum
{
    EgcwordcategorytableEnum_MISC = 0,
    EgcwordcategorytableEnum_DIRECTIONS = 1,
    EgcwordcategorytableEnum_HELP = 2,
    EgcwordcategorytableEnum_TRADE = 3,
    EgcwordcategorytableEnum_LORE = 4,
    EgcwordcategorytableEnum_TECH = 5,
    EgcwordcategorytableEnum_THREAT = 6,
};

class cgcwordcategorytableEnum
{
    static const unsigned __int64 muNameHash = 5711063355148023793;
    static const unsigned __int64 muTemplateHash = 6112923861635261488;
    static const int miNumMembers = 1;

    egcwordcategorytableEnum megcwordcategorytableEnum;

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
