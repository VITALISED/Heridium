#include "gcrewardweaponslot.meta.h"

void cGcRewardWeaponSlot::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29447440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardWeaponSlot::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardWeaponSlot::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

