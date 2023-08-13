#include "gcmessagenpcbehaviourevent.meta.h"

void cGcMessageNPCBehaviourEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30994992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageNPCBehaviourEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageNPCBehaviourEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

