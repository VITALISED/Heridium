#include "tkproceduraltexture.meta.h"

void cTkProceduralTexture::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21483600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralTexture::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkProceduralTexture::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

