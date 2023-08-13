#include "gcrewardoverridepulseencounterchance.meta.h"

void cGcRewardOverridePulseEncounterChance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29708656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardOverridePulseEncounterChance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29717024);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardOverridePulseEncounterChance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

