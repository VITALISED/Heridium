#include "gctradingcategorydata.meta.h"

void cGcTradingCategoryData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29190000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTradingCategoryData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29191488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTradingCategoryData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29192240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

