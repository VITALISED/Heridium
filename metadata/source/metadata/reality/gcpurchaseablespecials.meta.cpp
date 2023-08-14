#include "gcpurchaseablespecials.meta.h"

void cGcPurchaseableSpecials::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30217440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPurchaseableSpecials::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220448);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPurchaseableSpecials::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221456);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPurchaseableSpecials::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30206768);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPurchaseableSpecials::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30210768);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPurchaseableSpecials::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30194448);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPurchaseableSpecials::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30198208);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPurchaseableSpecials::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30202288);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPurchaseableSpecials::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30212512);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPurchaseableSpecials::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30209216);
    return classPtrDestroyFunc(lPtr);
}

