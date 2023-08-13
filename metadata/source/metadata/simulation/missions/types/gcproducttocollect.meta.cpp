#include "gcproducttocollect.meta.h"

void cGcProductToCollect::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24954400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProductToCollect::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24956368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProductToCollect::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957344);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

