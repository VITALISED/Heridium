#include "tkactionbuttonmap.meta.h"

void cTkActionButtonMap::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21093248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkActionButtonMap::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21097680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkActionButtonMap::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21098928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

