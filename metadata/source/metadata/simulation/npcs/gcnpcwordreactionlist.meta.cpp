#include "gcnpcwordreactionlist.meta.h"

void cGcNPCWordReactionList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24845040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCWordReactionList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846864);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCWordReactionList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

