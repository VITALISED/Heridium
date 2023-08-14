#include "gcfiendcrimeaction.meta.h"

void cGcFiendCrimeAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28488544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFiendCrimeAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495200);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFiendCrimeAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28496960);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFiendCrimeAction::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(28475648);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFiendCrimeAction::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(28481472);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFiendCrimeAction::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(28463072);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFiendCrimeAction::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(28466560);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFiendCrimeAction::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(28470480);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFiendCrimeAction::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(28482256);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFiendCrimeAction::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(28480336);
    return classPtrDestroyFunc(lPtr);
}

