#include "gccustomisationgroups.meta.h"

void cGcCustomisationGroups::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28402800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomisationGroups::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28405056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomisationGroups::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28406096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

