#include "tkmetadatareadmask.meta.h"

void cTkMetadataReadMask::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21601472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMetadataReadMask::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMetadataReadMask::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

