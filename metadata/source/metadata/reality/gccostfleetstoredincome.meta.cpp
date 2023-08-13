#include "gccostfleetstoredincome.meta.h"

void cGcCostFleetStoredIncome::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30781616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostFleetStoredIncome::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostFleetStoredIncome::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30787040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

