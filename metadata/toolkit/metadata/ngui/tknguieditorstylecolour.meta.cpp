#include "tknguieditorstylecolour.meta.h"

void cTkNGuiEditorStyleColour::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22048000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiEditorStyleColour::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiEditorStyleColour::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

