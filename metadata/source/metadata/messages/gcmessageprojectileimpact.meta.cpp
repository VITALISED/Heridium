#include "gcmessageprojectileimpact.meta.h"

void cGcMessageProjectileImpact::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30996528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageProjectileImpact::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999856);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMessageProjectileImpact::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001056);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMessageProjectileImpact::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30984544);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMessageProjectileImpact::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30988416);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMessageProjectileImpact::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30972784);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMessageProjectileImpact::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30975824);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMessageProjectileImpact::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30979664);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMessageProjectileImpact::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30989792);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMessageProjectileImpact::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30987248);
    return classPtrDestroyFunc(lPtr);
}

