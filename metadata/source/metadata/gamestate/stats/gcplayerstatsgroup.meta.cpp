#include "gcplayerstatsgroup.meta.h"

void cGcPlayerStatsGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33020688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerStatsGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerStatsGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

