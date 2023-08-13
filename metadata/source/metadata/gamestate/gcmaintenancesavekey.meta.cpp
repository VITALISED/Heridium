#include "gcmaintenancesavekey.meta.h"

void cGcMaintenanceSaveKey::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33784048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMaintenanceSaveKey::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33789648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMaintenanceSaveKey::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33790992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

