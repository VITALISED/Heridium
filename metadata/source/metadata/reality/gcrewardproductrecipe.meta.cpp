#include "gcrewardproductrecipe.meta.h"

void cGcRewardProductRecipe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29713088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardProductRecipe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardProductRecipe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

