#include "gcdisplaytext.meta.h"

void cGcDisplayText::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28487824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDisplayText::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28495120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDisplayText::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28496912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

