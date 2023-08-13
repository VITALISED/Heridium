#include "gcrewardplanetsubstance.meta.h"

void cGcRewardPlanetSubstance::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29710448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardPlanetSubstance::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29717504);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardPlanetSubstance::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

