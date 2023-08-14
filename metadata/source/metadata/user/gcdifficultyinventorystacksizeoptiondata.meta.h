#pragma once
#include "../../../../pch.h"

class cGcDifficultyInventoryStackSizeOptionData
{
public:
    static const unsigned __int64 muNameHash = 0xB9FD998A06AA6DE0;
    static const unsigned __int64 muTemplateHash = 0x6B6550330B94F440;
    static const int miNumMembers = 4;

    int miSubstanceStackLimit;
    int miProductStackLimit;
    cTkFixedArray<int, 12> maMaxSubstanceStackSizes;
    cTkFixedArray<int, 12> maMaxProductStackSizes;

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
