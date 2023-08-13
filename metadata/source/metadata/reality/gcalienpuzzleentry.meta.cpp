#include "gcalienpuzzleentry.meta.h"

void cGcAlienPuzzleEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30893056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPuzzleEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPuzzleEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

