#include "gcmechweaponlocationpriority.meta.h"

void cGcMechWeaponLocationPriority::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23265968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechWeaponLocationPriority::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23267392);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMechWeaponLocationPriority::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267888);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMechWeaponLocationPriority::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23260848);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMechWeaponLocationPriority::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23262768);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMechWeaponLocationPriority::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23254704);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMechWeaponLocationPriority::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23256064);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMechWeaponLocationPriority::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23258384);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMechWeaponLocationPriority::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23263488);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMechWeaponLocationPriority::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23262240);
    return classPtrDestroyFunc(lPtr);
}

