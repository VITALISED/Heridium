#include "gcactiontriggerstate.meta.h"

void cGcActionTriggerState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28597440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcActionTriggerState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcActionTriggerState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

