#include "gcsubstanceamount.meta.h"

void cGcSubstanceAmount::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27121744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSubstanceAmount::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSubstanceAmount::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

