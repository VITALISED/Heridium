#include "tknguieditortexttype.meta.h"

void cTKNGuiEditorTextType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22046256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTKNGuiEditorTextType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTKNGuiEditorTextType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22053808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

