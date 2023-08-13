#include "gcplayerweaponpropertiestable.meta.h"

void cGcPlayerWeaponPropertiesTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23180224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerWeaponPropertiesTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerWeaponPropertiesTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186384);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

