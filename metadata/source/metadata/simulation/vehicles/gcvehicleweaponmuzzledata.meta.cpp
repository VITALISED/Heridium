#include "gcvehicleweaponmuzzledata.meta.h"

void cGcVehicleWeaponMuzzleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23184000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleWeaponMuzzleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleWeaponMuzzleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

