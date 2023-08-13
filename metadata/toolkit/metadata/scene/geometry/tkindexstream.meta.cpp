#include "tkindexstream.meta.h"

void cTkIndexStream::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21933520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkIndexStream::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkIndexStream::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21937872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

