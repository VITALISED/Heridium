#include "tknguigraphicstyledata.meta.h"

void cTkNGuiGraphicStyleData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22049520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiGraphicStyleData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiGraphicStyleData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

