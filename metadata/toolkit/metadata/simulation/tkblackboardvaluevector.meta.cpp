#include "tkblackboardvaluevector.meta.h"

void cTkBlackboardValueVector::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21707968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBlackboardValueVector::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBlackboardValueVector::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

