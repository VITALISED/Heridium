#include "gcvehiclescantableentry.meta.h"

void cGcVehicleScanTableEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23183056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleScanTableEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleScanTableEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

