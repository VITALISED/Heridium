#include "gcnpcinteractionsdatatable.meta.h"

void cGcNPCInteractionsDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24951456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCInteractionsDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24955648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCInteractionsDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24956912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

