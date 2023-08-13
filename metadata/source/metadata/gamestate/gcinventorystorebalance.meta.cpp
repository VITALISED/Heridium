#include "gcinventorystorebalance.meta.h"

void cGcInventoryStoreBalance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33782720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryStoreBalance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33789408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryStoreBalance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33790848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

