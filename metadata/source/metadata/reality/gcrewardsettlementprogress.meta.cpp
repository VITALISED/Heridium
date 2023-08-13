#include "gcrewardsettlementprogress.meta.h"

void cGcRewardSettlementProgress::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29623024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSettlementProgress::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629328);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSettlementProgress::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29630976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

