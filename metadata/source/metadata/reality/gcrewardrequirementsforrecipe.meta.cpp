#include "gcrewardrequirementsforrecipe.meta.h"

void cGcRewardRequirementsForRecipe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29714784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardRequirementsForRecipe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardRequirementsForRecipe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

