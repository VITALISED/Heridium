#include "gcplanetarymappingtable.meta.h"

void cGcPlanetaryMappingTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23994736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetaryMappingTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetaryMappingTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

