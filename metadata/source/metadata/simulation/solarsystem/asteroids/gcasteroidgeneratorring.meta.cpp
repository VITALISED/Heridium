#include "gcasteroidgeneratorring.meta.h"

void cGcAsteroidGeneratorRing::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24227440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAsteroidGeneratorRing::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24233728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAsteroidGeneratorRing::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

