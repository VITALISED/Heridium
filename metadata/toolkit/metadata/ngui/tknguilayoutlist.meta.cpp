#include "tknguilayoutlist.meta.h"

void cTkNGuiLayoutList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22049824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiLayoutList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiLayoutList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

