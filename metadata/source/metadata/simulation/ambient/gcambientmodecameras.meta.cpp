#include "gcambientmodecameras.meta.h"

void cGcAmbientModeCameras::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28978144);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAmbientModeCameras::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28986752);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcAmbientModeCameras::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988592);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcAmbientModeCameras::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(28966304);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcAmbientModeCameras::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(28973552);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcAmbientModeCameras::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(28953344);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcAmbientModeCameras::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(28956864);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcAmbientModeCameras::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(28961056);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcAmbientModeCameras::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(28974736);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcAmbientModeCameras::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(28971984);
    return classPtrDestroyFunc(lPtr);
}

