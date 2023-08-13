#include "gcrewardsettlementstat.meta.h"

void cGcRewardSettlementStat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29623456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSettlementStat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSettlementStat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

