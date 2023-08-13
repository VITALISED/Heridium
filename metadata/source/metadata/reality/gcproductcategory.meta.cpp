#include "gcproductcategory.meta.h"

void cGcProductCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30215232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProductCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30219968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProductCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

