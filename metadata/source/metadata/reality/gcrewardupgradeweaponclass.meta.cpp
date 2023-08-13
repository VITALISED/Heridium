#include "gcrewardupgradeweaponclass.meta.h"

void cGcRewardUpgradeWeaponClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29446272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardUpgradeWeaponClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardUpgradeWeaponClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

