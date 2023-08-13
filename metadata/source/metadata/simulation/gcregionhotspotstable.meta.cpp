#include "gcregionhotspotstable.meta.h"

void cGcRegionHotspotsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26310576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRegionHotspotsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRegionHotspotsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

