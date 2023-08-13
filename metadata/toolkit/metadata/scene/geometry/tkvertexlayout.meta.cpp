#include "tkvertexlayout.meta.h"

void cTkVertexLayout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21813808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVertexLayout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21815280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVertexLayout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21816208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

