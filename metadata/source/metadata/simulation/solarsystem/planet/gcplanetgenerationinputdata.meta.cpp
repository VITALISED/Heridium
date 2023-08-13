#include "gcplanetgenerationinputdata.meta.h"

void cGcPlanetGenerationInputData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23991616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetGenerationInputData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetGenerationInputData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

