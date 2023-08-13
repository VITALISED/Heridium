#include "gcblackboardintcomparedecoratordata.meta.h"

void cGcBlackboardIntCompareDecoratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28155424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBlackboardIntCompareDecoratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28159728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBlackboardIntCompareDecoratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

