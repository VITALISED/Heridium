#include "gcproductproceduralonlydata.meta.h"

void cGcProductProceduralOnlyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30216000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProductProceduralOnlyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220128);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcProductProceduralOnlyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221264);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcProductProceduralOnlyData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30205616);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcProductProceduralOnlyData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30210240);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcProductProceduralOnlyData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30193680);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcProductProceduralOnlyData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30197024);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcProductProceduralOnlyData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30201264);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcProductProceduralOnlyData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30211872);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcProductProceduralOnlyData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30208752);
    return classPtrDestroyFunc(lPtr);
}

