#include "gcasteroidgeneratorassignment.meta.h"

void cGcAsteroidGeneratorAssignment::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24227040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAsteroidGeneratorAssignment::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24233648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAsteroidGeneratorAssignment::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

