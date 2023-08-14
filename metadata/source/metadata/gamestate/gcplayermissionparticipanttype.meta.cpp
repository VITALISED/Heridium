#include "gcplayermissionparticipanttype.meta.h"

void cGcPlayerMissionParticipantType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33787024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerMissionParticipantType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790288);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPlayerMissionParticipantType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791376);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPlayerMissionParticipantType::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33775904);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPlayerMissionParticipantType::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPlayerMissionParticipantType::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33762032);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPlayerMissionParticipantType::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33766160);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPlayerMissionParticipantType::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33770864);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPlayerMissionParticipantType::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33782048);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPlayerMissionParticipantType::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33778864);
    return classPtrDestroyFunc(lPtr);
}
