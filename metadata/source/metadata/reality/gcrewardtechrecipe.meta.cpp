#include "gcrewardtechrecipe.meta.h"

void cGcRewardTechRecipe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29442512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTechRecipe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTechRecipe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

