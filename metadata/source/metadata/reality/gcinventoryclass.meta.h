#pragma once
#include "../../../../pch.h"

enum eInventoryClass
{
    EInventoryClass_C = 0,
    EInventoryClass_B = 1,
    EInventoryClass_A = 2,
    EInventoryClass_S = 3,
};

class cGcInventoryClass
{
public:
    static const unsigned __int64 muNameHash = 0x5C2C30D664D4775B;
    static const unsigned __int64 muTemplateHash = 0xC92DACAD69EBE5B6;
    static const int miNumMembers = 1;

    eInventoryClass meInventoryClass;

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
