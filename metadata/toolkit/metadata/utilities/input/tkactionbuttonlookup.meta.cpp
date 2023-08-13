#include "tkactionbuttonlookup.meta.h"

void cTkActionButtonLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21092992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkActionButtonLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21097600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkActionButtonLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21098880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

