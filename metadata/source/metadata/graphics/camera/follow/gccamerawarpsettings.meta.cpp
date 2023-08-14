#include "gccamerawarpsettings.meta.h"

void cGcCameraWarpSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31575344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraWarpSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578160);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCameraWarpSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578736);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCameraWarpSettings::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31571632);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCameraWarpSettings::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31573840);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCameraWarpSettings::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31565904);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCameraWarpSettings::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31567536);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCameraWarpSettings::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31569584);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCameraWarpSettings::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31573952);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCameraWarpSettings::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31573408);
    return classPtrDestroyFunc(lPtr);
}

