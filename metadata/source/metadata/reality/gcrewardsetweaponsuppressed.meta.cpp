#include "gcrewardsetweaponsuppressed.meta.h"

void cGcRewardSetWeaponSuppressed::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29622176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSetWeaponSuppressed::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSetWeaponSuppressed::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29630736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

