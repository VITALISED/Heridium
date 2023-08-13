#include "tkanimblendnode.meta.h"

void cTkAnimBlendNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22503808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimBlendNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimBlendNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

