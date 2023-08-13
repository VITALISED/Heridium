#include "gcdamagemultiplierlookup.meta.h"

void cGcDamageMultiplierLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24500784);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDamageMultiplierLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24503408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDamageMultiplierLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24504112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

