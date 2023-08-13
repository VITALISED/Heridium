#include "gcpetmoodstaminamodifier.meta.h"

void cGcPetMoodStaminaModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27761712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetMoodStaminaModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764352);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetMoodStaminaModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765040);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

