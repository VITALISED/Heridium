#include "gcplayerhazardtable.meta.h"

void cGcPlayerHazardTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24597968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerHazardTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24601888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerHazardTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24602864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

