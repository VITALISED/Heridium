#include "gcweaponinventorymaxupgradecapacity.meta.h"

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29092000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeaponInventoryMaxUpgradeCapacity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

