#include "gcvehiclecheckpointcomponentdata.meta.h"

void cGcVehicleCheckpointComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23180912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleCheckpointComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleCheckpointComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186480);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

