#include "gcrewardsetabandonedfreightermissionstate.meta.h"

void cGcRewardSetAbandonedFreighterMissionState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29620800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSetAbandonedFreighterMissionState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29628768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSetAbandonedFreighterMissionState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29630544);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

