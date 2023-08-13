#include "gcpetbehaviourdata.meta.h"

void cGcPetBehaviourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27759808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetBehaviourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27763872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetBehaviourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

