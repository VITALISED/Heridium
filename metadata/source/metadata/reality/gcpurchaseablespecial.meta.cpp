#include "gcpurchaseablespecial.meta.h"

void cGcPurchaseableSpecial::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30217168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPurchaseableSpecial::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPurchaseableSpecial::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

