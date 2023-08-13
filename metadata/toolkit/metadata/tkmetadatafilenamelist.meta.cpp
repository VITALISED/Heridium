#include "tkmetadatafilenamelist.meta.h"

void cTkMetadataFilenameList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21601216);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMetadataFilenameList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21604208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkMetadataFilenameList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21605424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

