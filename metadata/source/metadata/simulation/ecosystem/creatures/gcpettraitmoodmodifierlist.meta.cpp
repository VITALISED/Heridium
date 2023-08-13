#include "gcpettraitmoodmodifierlist.meta.h"

void cGcPetTraitMoodModifierList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27762384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetTraitMoodModifierList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764512);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetTraitMoodModifierList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

