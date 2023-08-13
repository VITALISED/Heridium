#include "tkbehaviourtreeconcurrentselectordata.meta.h"

void cTkBehaviourTreeConcurrentSelectorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21702688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBehaviourTreeConcurrentSelectorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBehaviourTreeConcurrentSelectorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21711968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

