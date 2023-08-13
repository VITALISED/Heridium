#include "gcareadamagedatatable.meta.h"

void cGcAreaDamageDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24712224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAreaDamageDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24719520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAreaDamageDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

