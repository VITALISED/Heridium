#include "gccostproductonlytakeifcanafford.meta.h"

void cGcCostProductOnlyTakeIfCanAfford::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30682080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostProductOnlyTakeIfCanAfford::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30686480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostProductOnlyTakeIfCanAfford::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30688048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

