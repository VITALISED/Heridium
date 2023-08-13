#include "gcbasebuildingpartsdatatable.meta.h"

void cGcBaseBuildingPartsDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34359920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseBuildingPartsDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34365664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseBuildingPartsDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34366896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

