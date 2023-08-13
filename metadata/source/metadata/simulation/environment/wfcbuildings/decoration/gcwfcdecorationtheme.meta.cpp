#include "gcwfcdecorationtheme.meta.h"

void cGcWFCDecorationTheme::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26923360);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCDecorationTheme::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCDecorationTheme::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

