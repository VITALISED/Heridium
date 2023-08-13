#include "gcalienpuzzletable.meta.h"

void cGcAlienPuzzleTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30775936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPuzzleTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPuzzleTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

