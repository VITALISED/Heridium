#include "gcoverlaytexture.meta.h"

void cGcOverlayTexture::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23989232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcOverlayTexture::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcOverlayTexture::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23996784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

