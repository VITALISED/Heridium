#include "gcpetbehaviourtable.meta.h"

void cGcPetBehaviourTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27760496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetBehaviourTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764032);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetBehaviourTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27764848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

