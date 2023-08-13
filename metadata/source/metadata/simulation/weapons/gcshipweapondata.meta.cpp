#include "gcshipweapondata.meta.h"

void cGcShipWeaponData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23067664);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipWeaponData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipWeaponData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23071040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

