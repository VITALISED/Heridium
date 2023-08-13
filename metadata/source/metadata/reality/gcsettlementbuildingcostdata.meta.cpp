#include "gcsettlementbuildingcostdata.meta.h"

void cGcSettlementBuildingCostData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29449088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementBuildingCostData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29452160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementBuildingCostData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

