#include "gccharactercustomisationcolourdata.meta.h"

void cGcCharacterCustomisationColourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34070304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterCustomisationColourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterCustomisationColourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

