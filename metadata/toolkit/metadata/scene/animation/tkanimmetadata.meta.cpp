#include "tkanimmetadata.meta.h"

void cTkAnimMetadata::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21931104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimMetadata::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimMetadata::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21937504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

