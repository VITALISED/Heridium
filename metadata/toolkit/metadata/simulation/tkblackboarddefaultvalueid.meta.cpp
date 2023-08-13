#include "tkblackboarddefaultvalueid.meta.h"

void cTkBlackboardDefaultValueId::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21705280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBlackboardDefaultValueId::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBlackboardDefaultValueId::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

