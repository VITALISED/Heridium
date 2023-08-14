#include "gcpetfollowupbehaviour.meta.h"

void cGcPetFollowUpBehaviour::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27761408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetFollowUpBehaviour::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764272);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPetFollowUpBehaviour::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764992);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPetFollowUpBehaviour::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27755536);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPetFollowUpBehaviour::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27758848);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPetFollowUpBehaviour::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27747920);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPetFollowUpBehaviour::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27749712);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPetFollowUpBehaviour::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27752560);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPetFollowUpBehaviour::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27759152);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPetFollowUpBehaviour::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27757808);
    return classPtrDestroyFunc(lPtr);
}

