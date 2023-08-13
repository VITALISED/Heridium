#include "tkimguiwindowdata.meta.h"

void cTkImGuiWindowData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21155344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkImGuiWindowData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21157808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkImGuiWindowData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21158448);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

