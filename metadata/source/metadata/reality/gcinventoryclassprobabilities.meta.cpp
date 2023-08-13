#include "gcinventoryclassprobabilities.meta.h"

void cGcInventoryClassProbabilities::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30463360);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryClassProbabilities::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryClassProbabilities::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30471808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

