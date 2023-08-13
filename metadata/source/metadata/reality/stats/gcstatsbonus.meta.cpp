#include "gcstatsbonus.meta.h"

void cGcStatsBonus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28985760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsBonus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28988272);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsBonus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

