#include "gcbasesearchfilter.meta.h"

void cGcBaseSearchFilter::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34364544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseSearchFilter::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366624);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBaseSearchFilter::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367472);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBaseSearchFilter::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34352928);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBaseSearchFilter::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34356656);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBaseSearchFilter::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34338192);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBaseSearchFilter::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34342752);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBaseSearchFilter::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34347664);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBaseSearchFilter::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34358272);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBaseSearchFilter::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34354672);
    return classPtrDestroyFunc(lPtr);
}

