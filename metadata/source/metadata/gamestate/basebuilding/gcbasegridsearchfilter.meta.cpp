#include "gcbasegridsearchfilter.meta.h"

void cGcBaseGridSearchFilter::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34362080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBaseGridSearchFilter::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34366144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBaseGridSearchFilter::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34367184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

