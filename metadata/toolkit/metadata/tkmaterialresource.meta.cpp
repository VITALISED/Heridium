#include "tkmaterialresource.meta.h"

void cTkMaterialResource::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21600928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialResource::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMaterialResource::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

