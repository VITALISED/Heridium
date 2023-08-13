#include "tkcontrollerbuttonlookup.meta.h"

void cTkControllerButtonLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21095184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkControllerButtonLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkControllerButtonLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

