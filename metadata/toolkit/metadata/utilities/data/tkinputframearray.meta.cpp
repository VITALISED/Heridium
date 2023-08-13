#include "tkinputframearray.meta.h"

void cTkInputFrameArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21374656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInputFrameArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInputFrameArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

