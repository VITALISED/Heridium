#include "gcnpcwordreactioncategory.meta.h"

void cGcNPCWordReactionCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24844752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCWordReactionCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846784);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCWordReactionCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

