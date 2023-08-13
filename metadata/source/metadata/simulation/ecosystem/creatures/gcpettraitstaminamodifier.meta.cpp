#include "gcpettraitstaminamodifier.meta.h"

void cGcPetTraitStaminaModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27762800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetTraitStaminaModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetTraitStaminaModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

