#include "gcrewardupgradeshipclass.meta.h"

void cGcRewardUpgradeShipClass::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29445808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardUpgradeShipClass::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardUpgradeShipClass::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

