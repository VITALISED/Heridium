#include "tkvertexstream.meta.h"

void cTkVertexStream::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21814144);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVertexStream::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21815360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVertexStream::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21816256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

