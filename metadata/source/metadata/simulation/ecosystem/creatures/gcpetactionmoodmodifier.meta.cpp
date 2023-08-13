#include "gcpetactionmoodmodifier.meta.h"

void cGcPetActionMoodModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27877536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetActionMoodModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetActionMoodModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

