#include "gcobjectdefinitiondata.meta.h"

void cGcObjectDefinitionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27232992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectDefinitionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27235808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectDefinitionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

