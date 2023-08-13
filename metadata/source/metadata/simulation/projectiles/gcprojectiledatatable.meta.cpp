#include "gcprojectiledatatable.meta.h"

void cGcProjectileDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24502864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProjectileDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24503888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProjectileDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24504400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

