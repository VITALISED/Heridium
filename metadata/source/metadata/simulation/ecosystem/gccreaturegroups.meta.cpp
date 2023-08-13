#include "gccreaturegroups.meta.h"

void cGcCreatureGroups::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27542832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureGroups::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureGroups::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

