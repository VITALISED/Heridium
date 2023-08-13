#include "gcfreighterroomnpcspawncapacityentry.meta.h"

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34073632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

