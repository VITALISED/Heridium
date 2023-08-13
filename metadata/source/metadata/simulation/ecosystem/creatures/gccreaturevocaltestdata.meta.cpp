#include "gccreaturevocaltestdata.meta.h"

void cGcCreatureVocalTestData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27877200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureVocalTestData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureVocalTestData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

