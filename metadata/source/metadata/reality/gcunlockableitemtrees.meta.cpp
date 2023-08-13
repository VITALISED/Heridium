#include "gcunlockableitemtrees.meta.h"

void cGcUnlockableItemTrees::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29089328);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockableItemTrees::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockableItemTrees::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

