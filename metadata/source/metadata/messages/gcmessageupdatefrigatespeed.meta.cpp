#include "gcmessageupdatefrigatespeed.meta.h"

void cGcMessageUpdateFrigateSpeed::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30998784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageUpdateFrigateSpeed::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000496);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMessageUpdateFrigateSpeed::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001344);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMessageUpdateFrigateSpeed::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30986432);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMessageUpdateFrigateSpeed::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMessageUpdateFrigateSpeed::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30973472);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMessageUpdateFrigateSpeed::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30976896);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMessageUpdateFrigateSpeed::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30981376);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMessageUpdateFrigateSpeed::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30991616);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMessageUpdateFrigateSpeed::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30987712);
    return classPtrDestroyFunc(lPtr);
}

