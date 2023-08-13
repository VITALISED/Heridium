#include "gcasteroidgeneratorslab.meta.h"

void cGcAsteroidGeneratorSlab::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24227936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAsteroidGeneratorSlab::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24233808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAsteroidGeneratorSlab::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235104);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

