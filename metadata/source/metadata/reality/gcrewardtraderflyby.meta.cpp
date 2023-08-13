#include "gcrewardtraderflyby.meta.h"

void cGcRewardTraderFlyby::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29443488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTraderFlyby::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTraderFlyby::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

