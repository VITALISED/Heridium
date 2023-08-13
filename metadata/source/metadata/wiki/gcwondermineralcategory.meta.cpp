#include "gcwondermineralcategory.meta.h"

void cGcWonderMineralCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22500176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderMineralCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderMineralCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

