#include "gcrewardweapon.meta.h"

void cGcRewardWeapon::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29447040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardWeapon::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardWeapon::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

