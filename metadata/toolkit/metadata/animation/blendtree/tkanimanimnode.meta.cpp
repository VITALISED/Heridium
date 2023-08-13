#include "tkanimanimnode.meta.h"

void cTkAnimAnimNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22503440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimAnimNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimAnimNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

