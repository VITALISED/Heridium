#include "tkanim2dblendnodedata.meta.h"

void cTkAnim2dBlendNodeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22503168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnim2dBlendNodeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnim2dBlendNodeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

