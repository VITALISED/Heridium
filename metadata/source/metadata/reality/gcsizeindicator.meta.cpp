#include "gcsizeindicator.meta.h"

void cGcSizeIndicator::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29337936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSizeIndicator::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSizeIndicator::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

