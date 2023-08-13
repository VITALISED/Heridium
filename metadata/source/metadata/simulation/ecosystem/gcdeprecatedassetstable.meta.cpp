#include "gcdeprecatedassetstable.meta.h"

void cGcDeprecatedAssetsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27446896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDeprecatedAssetsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDeprecatedAssetsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

