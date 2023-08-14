#include "gcphotomodeadjustdata.meta.h"

void cGcPhotoModeAdjustData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22722064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPhotoModeAdjustData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22726384);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPhotoModeAdjustData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727328);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPhotoModeAdjustData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22714144);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPhotoModeAdjustData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22717984);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPhotoModeAdjustData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22705536);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPhotoModeAdjustData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22707392);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPhotoModeAdjustData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22710560);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPhotoModeAdjustData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22719552);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPhotoModeAdjustData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22717376);
    return classPtrDestroyFunc(lPtr);
}

