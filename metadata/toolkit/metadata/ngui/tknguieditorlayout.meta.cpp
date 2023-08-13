#include "tknguieditorlayout.meta.h"

void cTkNGuiEditorLayout::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22047392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiEditorLayout::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052720);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiEditorLayout::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

