#include "gchotactionmenutypes.meta.h"

void cGcHotActionMenuTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23065376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHotActionMenuTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069504);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHotActionMenuTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

