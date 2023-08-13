#include "tkpalettetexture.meta.h"

void cTkPaletteTexture::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21483040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPaletteTexture::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21487952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkPaletteTexture::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

