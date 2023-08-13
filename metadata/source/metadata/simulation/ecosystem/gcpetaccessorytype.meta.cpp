#include "gcpetaccessorytype.meta.h"

void cGcPetAccessoryType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27450256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetAccessoryType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetAccessoryType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

