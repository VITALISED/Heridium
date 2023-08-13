#include "gcproceduralproductcategory.meta.h"

void cGcProceduralProductCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30355232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralProductCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralProductCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

