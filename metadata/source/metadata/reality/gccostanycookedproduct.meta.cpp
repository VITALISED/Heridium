#include "gccostanycookedproduct.meta.h"

void cGcCostAnyCookedProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30779520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostAnyCookedProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostAnyCookedProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

