#include "gccreatureroledata.meta.h"

void cGcCreatureRoleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27544048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureRoleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureRoleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

