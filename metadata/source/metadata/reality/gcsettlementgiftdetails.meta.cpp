#include "gcsettlementgiftdetails.meta.h"

void cGcSettlementGiftDetails::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29450032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementGiftDetails::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29452320);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementGiftDetails::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

