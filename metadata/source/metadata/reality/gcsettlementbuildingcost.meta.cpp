#include "gcsettlementbuildingcost.meta.h"

void cGcSettlementBuildingCost::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29448432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementBuildingCost::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29452080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementBuildingCost::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

