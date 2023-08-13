#include "gccreaturerolefilenametable.meta.h"

void cGcCreatureRoleFilenameTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27546192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureRoleFilenameTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27549072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureRoleFilenameTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27550016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

