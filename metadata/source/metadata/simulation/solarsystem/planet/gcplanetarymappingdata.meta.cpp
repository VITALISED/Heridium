#include "gcplanetarymappingdata.meta.h"

void cGcPlanetaryMappingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23994128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetaryMappingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetaryMappingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

