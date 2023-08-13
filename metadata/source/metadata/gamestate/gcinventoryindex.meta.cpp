#include "gcinventoryindex.meta.h"

void cGcInventoryIndex::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33951184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryIndex::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33953184);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryIndex::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33954096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

