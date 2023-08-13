#include "gcwfcdecorationset.meta.h"

void cGcWFCDecorationSet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26923104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCDecorationSet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCDecorationSet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

