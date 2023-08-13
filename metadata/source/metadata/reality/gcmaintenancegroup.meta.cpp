#include "gcmaintenancegroup.meta.h"

void cGcMaintenanceGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30351184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMaintenanceGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMaintenanceGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

