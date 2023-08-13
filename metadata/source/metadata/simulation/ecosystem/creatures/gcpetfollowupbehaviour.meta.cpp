#include "gcpetfollowupbehaviour.meta.h"

void cGcPetFollowUpBehaviour::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27761408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetFollowUpBehaviour::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetFollowUpBehaviour::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

