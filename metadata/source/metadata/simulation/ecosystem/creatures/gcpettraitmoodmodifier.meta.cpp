#include "gcpettraitmoodmodifier.meta.h"

void cGcPetTraitMoodModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27762048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetTraitMoodModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetTraitMoodModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

