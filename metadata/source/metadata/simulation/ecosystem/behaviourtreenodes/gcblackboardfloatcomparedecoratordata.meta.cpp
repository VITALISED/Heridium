#include "gcblackboardfloatcomparedecoratordata.meta.h"

void cGcBlackboardFloatCompareDecoratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28155024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBlackboardFloatCompareDecoratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28159648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBlackboardFloatCompareDecoratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28160720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

