#include "gcalienpuzzleoption.meta.h"

void cGcAlienPuzzleOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30893760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPuzzleOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPuzzleOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

