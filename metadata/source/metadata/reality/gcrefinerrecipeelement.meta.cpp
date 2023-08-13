#include "gcrefinerrecipeelement.meta.h"

void cGcRefinerRecipeElement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29971280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRefinerRecipeElement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRefinerRecipeElement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

