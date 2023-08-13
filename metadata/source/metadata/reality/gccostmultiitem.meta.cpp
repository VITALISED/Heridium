#include "gccostmultiitem.meta.h"

void cGcCostMultiItem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30678816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostMultiItem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostMultiItem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

