#include "gcvehiclegaragecomponentdata.meta.h"

void cGcVehicleGarageComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23181680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcVehicleGarageComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23185376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcVehicleGarageComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23186576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

