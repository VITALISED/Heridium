#include "gccreatureikdata.meta.h"

void cGcCreatureIkData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27543376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureIkData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27548432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureIkData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27549632);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

