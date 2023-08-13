#include "tknguieditorstyledata.meta.h"

void cTkNGuiEditorStyleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22048304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiEditorStyleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiEditorStyleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

