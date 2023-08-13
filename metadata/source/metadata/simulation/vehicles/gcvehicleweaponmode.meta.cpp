#include "gcvehicleweaponmode.meta.h"

void cGcVehicleWeaponMode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23183680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleWeaponMode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleWeaponMode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

