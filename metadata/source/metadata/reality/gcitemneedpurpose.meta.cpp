#include "gcitemneedpurpose.meta.h"

void cGcItemNeedPurpose::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30469056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcItemNeedPurpose::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30471520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcItemNeedPurpose::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

