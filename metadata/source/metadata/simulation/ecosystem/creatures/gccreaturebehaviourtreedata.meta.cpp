#include "gccreaturebehaviourtreedata.meta.h"

void cGcCreatureBehaviourTreeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27872080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureBehaviourTreeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878176);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureBehaviourTreeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

