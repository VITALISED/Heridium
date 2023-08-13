#include "gcrewardupgradebase.meta.h"

void cGcRewardUpgradeBase::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29445424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardUpgradeBase::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardUpgradeBase::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

