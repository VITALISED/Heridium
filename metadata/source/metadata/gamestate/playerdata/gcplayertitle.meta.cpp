#include "gcplayertitle.meta.h"

void cGcPlayerTitle::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33020960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerTitle::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerTitle::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

