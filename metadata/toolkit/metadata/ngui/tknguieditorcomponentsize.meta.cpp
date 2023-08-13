#include "tknguieditorcomponentsize.meta.h"

void cTKNGuiEditorComponentSize::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22045936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTKNGuiEditorComponentSize::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTKNGuiEditorComponentSize::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22053760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

