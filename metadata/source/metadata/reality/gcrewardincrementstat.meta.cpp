#include "gcrewardincrementstat.meta.h"

void cGcRewardIncrementStat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29792720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardIncrementStat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29800880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardIncrementStat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29802800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

