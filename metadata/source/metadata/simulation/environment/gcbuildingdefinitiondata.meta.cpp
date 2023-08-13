#include "gcbuildingdefinitiondata.meta.h"

void cGcBuildingDefinitionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27336160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingDefinitionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27340960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingDefinitionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

