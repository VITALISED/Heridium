#include "gcrewardsecondarysubstance.meta.h"

void cGcRewardSecondarySubstance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29620192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSecondarySubstance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29628608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSecondarySubstance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29630448);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

