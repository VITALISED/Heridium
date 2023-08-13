#include "gcinventorylayout.meta.h"

void cGcInventoryLayout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33951456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryLayout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33953264);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryLayout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33954144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

