#include "gcpetbehaviourmoodmodifier.meta.h"

void cGcPetBehaviourMoodModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27760176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetBehaviourMoodModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27763952);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPetBehaviourMoodModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764800);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPetBehaviourMoodModifier::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27754400);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPetBehaviourMoodModifier::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27758144);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPetBehaviourMoodModifier::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27747664);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPetBehaviourMoodModifier::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27748896);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPetBehaviourMoodModifier::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27751552);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPetBehaviourMoodModifier::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27759024);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPetBehaviourMoodModifier::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27757504);
    return classPtrDestroyFunc(lPtr);
}

