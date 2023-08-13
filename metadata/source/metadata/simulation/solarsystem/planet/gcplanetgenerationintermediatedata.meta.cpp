#include "gcplanetgenerationintermediatedata.meta.h"

void cGcPlanetGenerationIntermediateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23992176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetGenerationIntermediateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetGenerationIntermediateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

