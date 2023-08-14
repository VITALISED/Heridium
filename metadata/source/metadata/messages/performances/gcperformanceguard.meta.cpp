#include "gcperformanceguard.meta.h"

void cGcPerformanceGuard::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30896064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPerformanceGuard::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897792);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPerformanceGuard::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898432);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPerformanceGuard::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30889552);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPerformanceGuard::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30891600);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPerformanceGuard::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30879328);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPerformanceGuard::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30882256);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPerformanceGuard::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30886064);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPerformanceGuard::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30892240);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPerformanceGuard::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30890720);
    return classPtrDestroyFunc(lPtr);
}

