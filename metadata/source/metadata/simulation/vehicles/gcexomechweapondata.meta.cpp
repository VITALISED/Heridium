#include "gcexomechweapondata.meta.h"

void cGcExoMechWeaponData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23384512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExoMechWeaponData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExoMechWeaponData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

