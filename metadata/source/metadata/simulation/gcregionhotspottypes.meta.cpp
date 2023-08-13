#include "gcregionhotspottypes.meta.h"

void cGcRegionHotspotTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26310256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRegionHotspotTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRegionHotspotTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

