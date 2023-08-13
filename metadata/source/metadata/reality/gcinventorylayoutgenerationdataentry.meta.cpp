#include "gcinventorylayoutgenerationdataentry.meta.h"

void cGcInventoryLayoutGenerationDataEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30465808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryLayoutGenerationDataEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryLayoutGenerationDataEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

