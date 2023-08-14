#include "gccameraaerialviewdata.meta.h"

void cGcCameraAerialViewData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31574368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraAerialViewData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578000);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCameraAerialViewData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578640);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCameraAerialViewData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31571088);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCameraAerialViewData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31573696);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCameraAerialViewData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31565504);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCameraAerialViewData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31566560);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCameraAerialViewData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31569120);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCameraAerialViewData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31573888);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCameraAerialViewData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31573312);
    return classPtrDestroyFunc(lPtr);
}

