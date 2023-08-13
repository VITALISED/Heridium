#include "gcplanetarymappingvalues.meta.h"

void cGcPlanetaryMappingValues::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23995088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetaryMappingValues::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetaryMappingValues::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

