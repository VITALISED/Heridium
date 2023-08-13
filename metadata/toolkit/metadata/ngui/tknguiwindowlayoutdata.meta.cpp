#include "tknguiwindowlayoutdata.meta.h"

void cTkNGuiWindowLayoutData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22052032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiWindowLayoutData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiWindowLayoutData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

