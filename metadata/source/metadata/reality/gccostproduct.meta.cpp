#include "gccostproduct.meta.h"

void cGcCostProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30681728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30686400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30688000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

