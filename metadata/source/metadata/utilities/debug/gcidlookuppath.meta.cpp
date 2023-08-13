#include "gcidlookuppath.meta.h"

void cGcIDLookupPath::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22625440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcIDLookupPath::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22631792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcIDLookupPath::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

