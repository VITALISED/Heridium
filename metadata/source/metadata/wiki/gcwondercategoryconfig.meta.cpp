#include "gcwondercategoryconfig.meta.h"

void cGcWonderCategoryConfig::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22498784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderCategoryConfig::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderCategoryConfig::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506448);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

