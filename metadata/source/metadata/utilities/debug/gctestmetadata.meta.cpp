#include "gctestmetadata.meta.h"

void cGcTestMetadata::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22628992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTestMetadata::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22632592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTestMetadata::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

