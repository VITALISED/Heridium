#include "gcselectableobjectlist.meta.h"

void cGcSelectableObjectList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27043024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSelectableObjectList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSelectableObjectList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

