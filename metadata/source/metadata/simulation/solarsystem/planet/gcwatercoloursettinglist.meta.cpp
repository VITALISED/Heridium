#include "gcwatercoloursettinglist.meta.h"

void cGcWaterColourSettingList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23763536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWaterColourSettingList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765920);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcWaterColourSettingList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766896);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcWaterColourSettingList::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23751600);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcWaterColourSettingList::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23754992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcWaterColourSettingList::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23737984);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcWaterColourSettingList::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23743072);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcWaterColourSettingList::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23747104);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcWaterColourSettingList::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23758064);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcWaterColourSettingList::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23753776);
    return classPtrDestroyFunc(lPtr);
}

