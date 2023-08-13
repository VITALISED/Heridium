#include "gccoststatcompare.meta.h"

void cGcCostStatCompare::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30684048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostStatCompare::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30687040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostStatCompare::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30688336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

