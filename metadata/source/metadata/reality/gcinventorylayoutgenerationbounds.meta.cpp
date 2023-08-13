#include "gcinventorylayoutgenerationbounds.meta.h"

void cGcInventoryLayoutGenerationBounds::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30465264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryLayoutGenerationBounds::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

