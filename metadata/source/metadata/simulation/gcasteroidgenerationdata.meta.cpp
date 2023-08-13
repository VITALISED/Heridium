#include "gcasteroidgenerationdata.meta.h"

void cGcAsteroidGenerationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26597856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAsteroidGenerationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAsteroidGenerationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

