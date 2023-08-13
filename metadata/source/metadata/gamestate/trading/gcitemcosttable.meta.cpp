#include "gcitemcosttable.meta.h"

void cGcItemCostTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(32888576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcItemCostTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(32889152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcItemCostTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(32889312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

