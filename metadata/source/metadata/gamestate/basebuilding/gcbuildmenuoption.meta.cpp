#include "gcbuildmenuoption.meta.h"

void cGcBuildMenuOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34203520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildMenuOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildMenuOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

