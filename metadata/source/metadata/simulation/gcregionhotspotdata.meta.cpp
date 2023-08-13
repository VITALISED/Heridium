#include "gcregionhotspotdata.meta.h"

void cGcRegionHotspotData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26309584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRegionHotspotData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRegionHotspotData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

