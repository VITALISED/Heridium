#include "gcrewardsubstance.meta.h"

void cGcRewardSubstance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29528992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSubstance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29531536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSubstance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

