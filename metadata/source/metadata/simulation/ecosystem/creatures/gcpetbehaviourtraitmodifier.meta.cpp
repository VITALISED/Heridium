#include "gcpetbehaviourtraitmodifier.meta.h"

void cGcPetBehaviourTraitModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27760864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetBehaviourTraitModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetBehaviourTraitModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

