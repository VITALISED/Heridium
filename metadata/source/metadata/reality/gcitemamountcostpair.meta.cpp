#include "gcitemamountcostpair.meta.h"

void cGcItemAmountCostPair::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30468480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcItemAmountCostPair::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30471360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcItemAmountCostPair::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472528);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

