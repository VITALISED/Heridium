#include "gcpetbehaviourmoodmodifier.meta.h"

void cGcPetBehaviourMoodModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27760176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetBehaviourMoodModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27763952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetBehaviourMoodModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

