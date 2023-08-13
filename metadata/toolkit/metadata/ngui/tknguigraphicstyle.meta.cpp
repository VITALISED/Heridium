#include "tknguigraphicstyle.meta.h"

void cTkNGuiGraphicStyle::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22048976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiGraphicStyle::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiGraphicStyle::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

