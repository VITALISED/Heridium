#include "gcmaintenanceelementgroups.meta.h"

void cGcMaintenanceElementGroups::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30350960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMaintenanceElementGroups::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMaintenanceElementGroups::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

