#include "gcscannericon.meta.h"

void cGcScannerIcon::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31423088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScannerIcon::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScannerIcon::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426832);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

