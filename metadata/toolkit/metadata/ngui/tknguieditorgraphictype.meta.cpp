#include "tknguieditorgraphictype.meta.h"

void cTkNGuiEditorGraphicType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22047072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiEditorGraphicType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiEditorGraphicType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22053952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

