#include "gcshipownershipcomponentdata.meta.h"

void cGcShipOwnershipComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23478512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipOwnershipComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23481312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipOwnershipComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23482304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

