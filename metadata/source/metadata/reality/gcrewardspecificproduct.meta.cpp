#include "gcrewardspecificproduct.meta.h"

void cGcRewardSpecificProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29627104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSpecificProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29630208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSpecificProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

