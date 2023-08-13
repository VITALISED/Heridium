#include "gcnpcreactionentry.meta.h"

void cGcNPCReactionEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24841232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCReactionEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24845984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCReactionEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

