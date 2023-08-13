#include "tknguitextstyle.meta.h"

void cTkNGuiTextStyle::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22050800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiTextStyle::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiTextStyle::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

