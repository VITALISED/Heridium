#include "gcvehiclescantable.meta.h"

void cGcVehicleScanTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23182800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleScanTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleScanTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

