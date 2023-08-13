#include "gcplayercharacterstatetable.meta.h"

void cGcPlayerCharacterStateTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24718592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerCharacterStateTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerCharacterStateTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24722032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

