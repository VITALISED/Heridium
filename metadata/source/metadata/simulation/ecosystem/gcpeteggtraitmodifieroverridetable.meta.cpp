#include "gcpeteggtraitmodifieroverridetable.meta.h"

void cGcPetEggTraitModifierOverrideTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetEggTraitModifierOverrideTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetEggTraitModifierOverrideTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454400);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

