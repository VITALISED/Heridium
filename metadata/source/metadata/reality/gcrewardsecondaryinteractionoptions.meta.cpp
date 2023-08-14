#include "gcrewardsecondaryinteractionoptions.meta.h"

void cGcRewardSecondaryInteractionOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29716768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSecondaryInteractionOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718944);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcRewardSecondaryInteractionOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720368);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcRewardSecondaryInteractionOptions::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(29702368);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcRewardSecondaryInteractionOptions::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(29704384);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcRewardSecondaryInteractionOptions::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(29687120);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcRewardSecondaryInteractionOptions::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(29690992);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcRewardSecondaryInteractionOptions::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(29696416);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcRewardSecondaryInteractionOptions::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(29708400);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcRewardSecondaryInteractionOptions::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(29703744);
    return classPtrDestroyFunc(lPtr);
}

