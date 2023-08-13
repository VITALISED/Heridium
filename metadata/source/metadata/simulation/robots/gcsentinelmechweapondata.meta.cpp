#include "gcsentinelmechweapondata.meta.h"

void cGcSentinelMechWeaponData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24311376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSentinelMechWeaponData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSentinelMechWeaponData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

