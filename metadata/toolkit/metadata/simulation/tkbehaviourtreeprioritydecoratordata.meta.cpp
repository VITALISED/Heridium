#include "tkbehaviourtreeprioritydecoratordata.meta.h"

void cTkBehaviourTreePriorityDecoratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21703232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBehaviourTreePriorityDecoratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBehaviourTreePriorityDecoratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

