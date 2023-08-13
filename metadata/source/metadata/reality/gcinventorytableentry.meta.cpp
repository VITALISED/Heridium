#include "gcinventorytableentry.meta.h"

void cGcInventoryTableEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30467888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryTableEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30471200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryTableEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

