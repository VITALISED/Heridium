#include "gchudcomponent.meta.h"

void cGcHUDComponent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31417344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHUDComponent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31424464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHUDComponent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

