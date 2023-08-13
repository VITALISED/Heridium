#include "gccreatureroledatatable.meta.h"

void cGcCreatureRoleDataTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27544448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureRoleDataTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureRoleDataTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

