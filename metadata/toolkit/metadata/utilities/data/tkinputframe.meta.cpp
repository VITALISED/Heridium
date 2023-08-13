#include "tkinputframe.meta.h"

void cTkInputFrame::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21374384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInputFrame::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInputFrame::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

