#include "gcproceduralproductdata.meta.h"

void cGcProceduralProductData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30355456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralProductData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralProductData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

