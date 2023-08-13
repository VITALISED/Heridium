#include "gcstatsgroup.meta.h"

void cGcStatsGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29339152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

