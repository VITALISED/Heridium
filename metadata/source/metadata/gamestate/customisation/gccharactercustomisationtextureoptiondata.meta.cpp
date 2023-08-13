#include "gccharactercustomisationtextureoptiondata.meta.h"

void cGcCharacterCustomisationTextureOptionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34071456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterCustomisationTextureOptionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterCustomisationTextureOptionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

