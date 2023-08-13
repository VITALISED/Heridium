#include "gccostitemfromlist.meta.h"

void cGcCostItemFromList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30676224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostItemFromList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostItemFromList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

