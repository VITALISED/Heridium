#include "gccostitemlistindexed.meta.h"

void cGcCostItemListIndexed::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30676544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostItemListIndexed::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostItemListIndexed::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

