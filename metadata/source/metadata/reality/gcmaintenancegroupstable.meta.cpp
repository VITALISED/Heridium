#include "gcmaintenancegroupstable.meta.h"

void cGcMaintenanceGroupsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30351792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMaintenanceGroupsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMaintenanceGroupsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

