#include "gcsynchronisedbufferdata.meta.h"

void cGcSynchronisedBufferData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33225296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSynchronisedBufferData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229472);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSynchronisedBufferData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230656);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSynchronisedBufferData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33215616);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSynchronisedBufferData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33219920);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSynchronisedBufferData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33203792);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSynchronisedBufferData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33207328);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSynchronisedBufferData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33211168);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSynchronisedBufferData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33221040);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSynchronisedBufferData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33218480);
    return classPtrDestroyFunc(lPtr);
}

