#include "gccustomisationdescriptorgroupoption.meta.h"

void cGcCustomisationDescriptorGroupOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28401280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomisationDescriptorGroupOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28404736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomisationDescriptorGroupOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28405904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

