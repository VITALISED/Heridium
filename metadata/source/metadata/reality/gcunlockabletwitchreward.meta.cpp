#include "gcunlockabletwitchreward.meta.h"

void cGcUnlockableTwitchReward::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29091408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockableTwitchReward::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094128);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcUnlockableTwitchReward::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095104);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcUnlockableTwitchReward::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(29080880);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcUnlockableTwitchReward::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcUnlockableTwitchReward::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(29069264);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcUnlockableTwitchReward::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(29072880);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcUnlockableTwitchReward::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(29076624);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcUnlockableTwitchReward::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(29086368);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcUnlockableTwitchReward::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(29083136);
    return classPtrDestroyFunc(lPtr);
}

