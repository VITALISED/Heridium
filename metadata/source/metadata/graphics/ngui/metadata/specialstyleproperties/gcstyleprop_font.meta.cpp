#include "gcstyleprop_font.meta.h"

void cGcStyleProp_Font::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31122128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStyleProp_Font::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStyleProp_Font::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

