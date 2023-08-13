#include "gcrewarddeath.meta.h"

void cGcRewardDeath::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29877040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDeath::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29884912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDeath::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29886912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

