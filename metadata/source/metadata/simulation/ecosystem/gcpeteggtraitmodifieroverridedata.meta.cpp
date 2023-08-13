#include "gcpeteggtraitmodifieroverridedata.meta.h"

void cGcPetEggTraitModifierOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetEggTraitModifierOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

