#include "gcbehaviourplayanimtrigger.meta.h"

void cGcBehaviourPlayAnimTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27662032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourPlayAnimTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27668736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBehaviourPlayAnimTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

