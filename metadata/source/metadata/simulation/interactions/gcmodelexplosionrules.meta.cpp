#include "gcmodelexplosionrules.meta.h"

void cGcModelExplosionRules::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26229392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcModelExplosionRules::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233360);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcModelExplosionRules::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234688);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcModelExplosionRules::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26215872);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcModelExplosionRules::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26219488);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcModelExplosionRules::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26201296);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcModelExplosionRules::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26205120);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcModelExplosionRules::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26210272);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcModelExplosionRules::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26222496);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcModelExplosionRules::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26218624);
    return classPtrDestroyFunc(lPtr);
}

