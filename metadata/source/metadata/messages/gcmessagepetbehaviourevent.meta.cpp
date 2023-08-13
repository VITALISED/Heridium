#include "gcmessagepetbehaviourevent.meta.h"

void cGcMessagePetBehaviourEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30995648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessagePetBehaviourEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999776);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessagePetBehaviourEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

