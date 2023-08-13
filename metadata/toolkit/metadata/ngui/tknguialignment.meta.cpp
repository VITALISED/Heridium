#include "tknguialignment.meta.h"

void cTkNGuiAlignment::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22046832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiAlignment::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiAlignment::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22053904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

