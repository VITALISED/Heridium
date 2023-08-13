#include "gcselectableobjecttable.meta.h"

void cGcSelectableObjectTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27043952);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSelectableObjectTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSelectableObjectTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

