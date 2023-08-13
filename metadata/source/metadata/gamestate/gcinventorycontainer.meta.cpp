#include "gcinventorycontainer.meta.h"

void cGcInventoryContainer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33950192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryContainer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33953024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryContainer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33954000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

