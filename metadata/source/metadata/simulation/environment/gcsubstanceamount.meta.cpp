#include "gcsubstanceamount.meta.h"

void cGcSubstanceAmount::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27121744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSubstanceAmount::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124576);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSubstanceAmount::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125312);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSubstanceAmount::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27113856);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSubstanceAmount::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27116096);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSubstanceAmount::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27103136);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSubstanceAmount::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27106624);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSubstanceAmount::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27110128);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSubstanceAmount::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27117184);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSubstanceAmount::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27115456);
    return classPtrDestroyFunc(lPtr);
}

