#include "gcsettlementstatstrengthdata.meta.h"

void cGcSettlementStatStrengthData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29336800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementStatStrengthData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementStatStrengthData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

