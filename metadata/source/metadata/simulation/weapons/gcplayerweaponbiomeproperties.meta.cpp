#include "gcplayerweaponbiomeproperties.meta.h"

void cGcPlayerWeaponBiomeProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23178864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerWeaponBiomeProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23184736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerWeaponBiomeProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

