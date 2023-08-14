#include "gcfreighterroomnpcspawncapacityentry.meta.h"

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34073632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076992);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078080);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34064240);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34052320);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34055968);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34059824);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34069424);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFreighterRoomNPCSpawnCapacityEntry::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34066896);
    return classPtrDestroyFunc(lPtr);
}

