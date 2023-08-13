#include "gcrewardstatcompareandset.meta.h"

void cGcRewardStatCompareAndSet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29528272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardStatCompareAndSet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29531376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardStatCompareAndSet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

