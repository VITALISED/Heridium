#include "gcrefinerrecipe.meta.h"

void cGcRefinerRecipe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29970864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRefinerRecipe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRefinerRecipe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

