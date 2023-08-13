#include "gcrewardspecificweapon.meta.h"

void cGcRewardSpecificWeapon::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29526848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSpecificWeapon::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29531056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSpecificWeapon::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

