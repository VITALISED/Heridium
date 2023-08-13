#include "tkanimvectorblendnodedata.meta.h"

void cTkAnimVectorBlendNodeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22504672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimVectorBlendNodeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimVectorBlendNodeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

