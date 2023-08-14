#include "gccustomisationgroup.meta.h"

void cGcCustomisationGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28402400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomisationGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28404976);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCustomisationGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28406048);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCustomisationGroup::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(28390944);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCustomisationGroup::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(28394512);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCustomisationGroup::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(28377504);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCustomisationGroup::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(28381264);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCustomisationGroup::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(28385808);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCustomisationGroup::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(28396672);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCustomisationGroup::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(28393312);
    return classPtrDestroyFunc(lPtr);
}

