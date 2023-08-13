#include "gcsubstancesecondarylookup.meta.h"

void cGcSubstanceSecondaryLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29184704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSubstanceSecondaryLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29190368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSubstanceSecondaryLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29191568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

