#include "gcvehiclemuzzledata.meta.h"

void cGcVehicleMuzzleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23181920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleMuzzleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleMuzzleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

