#include "gcitempricemodifiers.meta.h"

void cGcItemPriceModifiers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30469376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcItemPriceModifiers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30471600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcItemPriceModifiers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

