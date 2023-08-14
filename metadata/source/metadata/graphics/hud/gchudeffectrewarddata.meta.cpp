#include "gchudeffectrewarddata.meta.h"

void cGcHUDEffectRewardData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31417632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHUDEffectRewardData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424544);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcHUDEffectRewardData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426160);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcHUDEffectRewardData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31405088);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcHUDEffectRewardData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31411072);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcHUDEffectRewardData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31389136);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcHUDEffectRewardData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31393888);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcHUDEffectRewardData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31399456);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcHUDEffectRewardData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31413312);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcHUDEffectRewardData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31409696);
    return classPtrDestroyFunc(lPtr);
}

