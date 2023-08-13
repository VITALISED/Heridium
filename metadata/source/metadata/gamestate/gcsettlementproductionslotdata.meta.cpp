#include "gcsettlementproductionslotdata.meta.h"

void cGcSettlementProductionSlotData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33223584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementProductionSlotData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementProductionSlotData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

