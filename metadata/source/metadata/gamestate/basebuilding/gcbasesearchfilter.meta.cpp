#include "gcbasesearchfilter.meta.h"

void cGcBaseSearchFilter::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34364544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseSearchFilter::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseSearchFilter::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

