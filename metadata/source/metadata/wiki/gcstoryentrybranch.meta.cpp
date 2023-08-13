#include "gcstoryentrybranch.meta.h"

void cGcStoryEntryBranch::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22627680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStoryEntryBranch::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22632272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStoryEntryBranch::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

