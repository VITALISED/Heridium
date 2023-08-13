#include "gcfreighternpcspawnpriority.meta.h"

void cGcFreighterNPCSpawnPriority::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34072480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterNPCSpawnPriority::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterNPCSpawnPriority::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

