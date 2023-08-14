#include "gcweaponinventorymaxupgradecapacity.meta.h"

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29092000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094288);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095200);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(29081360);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(29069648);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(29073296);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(29077040);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(29086656);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(29083280);
    return classPtrDestroyFunc(lPtr);
}

