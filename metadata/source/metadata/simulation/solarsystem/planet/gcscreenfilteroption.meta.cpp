#include "gcscreenfilteroption.meta.h"

void cGcScreenFilterOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23865968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScreenFilterOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScreenFilterOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

