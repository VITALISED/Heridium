#include "gcinventorybasestat.meta.h"

void cGcInventoryBaseStat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30588016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryBaseStat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryBaseStat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

