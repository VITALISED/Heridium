#include "gcbuildingdefinitiontable.meta.h"

void cGcBuildingDefinitionTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27336432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingDefinitionTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingDefinitionTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

