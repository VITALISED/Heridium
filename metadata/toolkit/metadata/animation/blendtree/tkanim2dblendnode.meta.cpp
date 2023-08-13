#include "tkanim2dblendnode.meta.h"

void cTkAnim2dBlendNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22502528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnim2dBlendNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnim2dBlendNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

