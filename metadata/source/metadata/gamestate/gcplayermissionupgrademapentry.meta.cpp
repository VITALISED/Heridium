#include "gcplayermissionupgrademapentry.meta.h"

void cGcPlayerMissionUpgradeMapEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33788160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerMissionUpgradeMapEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerMissionUpgradeMapEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

