#include "tkanimvectorblendnode.meta.h"

void cTkAnimVectorBlendNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22504288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimVectorBlendNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimVectorBlendNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

