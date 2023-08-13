#include "gcrewardstatdiff.meta.h"

void cGcRewardStatDiff::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29528560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardStatDiff::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29531456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardStatDiff::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

