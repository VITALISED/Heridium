#include "gcrewarddisguisedproduct.meta.h"

void cGcRewardDisguisedProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29877856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDisguisedProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29885152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDisguisedProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

