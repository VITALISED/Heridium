#include "gcexomechweapondata.meta.h"

void cGcExoMechWeaponData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23384512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExoMechWeaponData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390416);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcExoMechWeaponData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391696);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcExoMechWeaponData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23374304);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcExoMechWeaponData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23380288);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcExoMechWeaponData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23361248);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcExoMechWeaponData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23364080);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcExoMechWeaponData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23369232);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcExoMechWeaponData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23381648);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcExoMechWeaponData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23378976);
    return classPtrDestroyFunc(lPtr);
}

