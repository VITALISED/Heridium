#include "gcscreenfilters.meta.h"

void cGcScreenFilters::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31504768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScreenFilters::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31507216);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScreenFilters::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31508256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

