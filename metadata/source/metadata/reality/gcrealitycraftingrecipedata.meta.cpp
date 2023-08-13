#include "gcrealitycraftingrecipedata.meta.h"

void cGcRealityCraftingRecipeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30218592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealityCraftingRecipeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRealityCraftingRecipeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

