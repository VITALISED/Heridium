#include "gctextstyleshadow.meta.h"

void cGcTextStyleShadow::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31230992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTextStyleShadow::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTextStyleShadow::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233744);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

