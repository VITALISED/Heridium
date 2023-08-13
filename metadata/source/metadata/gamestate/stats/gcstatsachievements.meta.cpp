#include "gcstatsachievements.meta.h"

void cGcStatsAchievements::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33023952);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsAchievements::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33026272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsAchievements::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

