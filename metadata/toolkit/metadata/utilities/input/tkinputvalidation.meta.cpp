#include "tkinputvalidation.meta.h"

void cTkInputValidation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21096016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInputValidation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInputValidation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

