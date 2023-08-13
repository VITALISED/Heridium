#include "tkmaterialshadermillnode.meta.h"

void cTkMaterialShaderMillNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21813248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialShaderMillNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21815120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialShaderMillNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21816112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

