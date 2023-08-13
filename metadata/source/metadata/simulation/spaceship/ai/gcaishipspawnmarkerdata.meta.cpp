#include "gcaishipspawnmarkerdata.meta.h"

void cGcAIShipSpawnMarkerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23759584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAIShipSpawnMarkerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAIShipSpawnMarkerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

