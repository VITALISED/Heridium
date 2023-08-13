#include "gcstatdefinitiontable.meta.h"

void cGcStatDefinitionTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33021536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatDefinitionTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatDefinitionTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

