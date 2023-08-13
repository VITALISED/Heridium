#include "gcunlockableitemtree.meta.h"

void cGcUnlockableItemTree::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29088400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockableItemTree::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockableItemTree::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

