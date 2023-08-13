#include "gcalienpuzzlecategory.meta.h"

void cGcAlienPuzzleCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30892832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPuzzleCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPuzzleCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

