#include "gcsettlementjobdetails.meta.h"

void cGcSettlementJobDetails::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29333712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementJobDetails::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementJobDetails::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

