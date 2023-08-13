#include "gcasteroidsystemgenerationdata.meta.h"

void cGcAsteroidSystemGenerationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26598176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAsteroidSystemGenerationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAsteroidSystemGenerationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

