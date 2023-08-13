#include "gcpuzzletextflow.meta.h"

void cGcPuzzleTextFlow::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30217696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPuzzleTextFlow::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPuzzleTextFlow::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

