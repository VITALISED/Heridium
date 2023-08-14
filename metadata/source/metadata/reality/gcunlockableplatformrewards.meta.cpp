#include "gcunlockableplatformrewards.meta.h"

void cGcUnlockablePlatformRewards::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29089920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockablePlatformRewards::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093728);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcUnlockablePlatformRewards::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094864);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcUnlockablePlatformRewards::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(29079552);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcUnlockablePlatformRewards::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(29084272);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcUnlockablePlatformRewards::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(29068496);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcUnlockablePlatformRewards::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(29071360);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcUnlockablePlatformRewards::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(29075440);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcUnlockablePlatformRewards::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(29085488);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcUnlockablePlatformRewards::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(29082576);
    return classPtrDestroyFunc(lPtr);
}

