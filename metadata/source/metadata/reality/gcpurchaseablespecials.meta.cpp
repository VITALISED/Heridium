#include "gcpurchaseablespecials.meta.h"

void cGcPurchaseableSpecials::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30217440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPurchaseableSpecials::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30220448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPurchaseableSpecials::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

