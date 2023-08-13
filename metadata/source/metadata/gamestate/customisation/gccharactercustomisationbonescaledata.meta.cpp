#include "gccharactercustomisationbonescaledata.meta.h"

void cGcCharacterCustomisationBoneScaleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34070032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterCustomisationBoneScaleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34076112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterCustomisationBoneScaleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34077552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

