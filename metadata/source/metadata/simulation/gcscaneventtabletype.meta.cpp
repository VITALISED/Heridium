#include "gcscaneventtabletype.meta.h"

void cGcScanEventTableType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26230064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventTableType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcScanEventTableType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

