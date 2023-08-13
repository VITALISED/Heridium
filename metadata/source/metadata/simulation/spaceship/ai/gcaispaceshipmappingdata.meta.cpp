#include "gcaispaceshipmappingdata.meta.h"

void cGcAISpaceshipMappingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23761280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAISpaceshipMappingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAISpaceshipMappingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

