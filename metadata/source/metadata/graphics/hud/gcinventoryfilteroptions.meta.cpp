#include "gcinventoryfilteroptions.meta.h"

void cGcInventoryFilterOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31420416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryFilterOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInventoryFilterOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

