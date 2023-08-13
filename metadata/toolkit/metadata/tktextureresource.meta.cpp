#include "tktextureresource.meta.h"

void cTkTextureResource::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21486672);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkTextureResource::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkTextureResource::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

