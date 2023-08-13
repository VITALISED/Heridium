#include "tknguilayoutlistdata.meta.h"

void cTkNGuiLayoutListData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22050080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiLayoutListData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiLayoutListData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

