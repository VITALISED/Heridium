#include "gcweightedfilename.meta.h"

void cGcWeightedFilename::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29092544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeightedFilename::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeightedFilename::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

