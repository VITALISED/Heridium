#include "gccreaturebehaviourtrees.meta.h"

void cGcCreatureBehaviourTrees::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27872384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureBehaviourTrees::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureBehaviourTrees::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879792);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

