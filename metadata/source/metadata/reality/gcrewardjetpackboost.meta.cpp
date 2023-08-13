#include "gcrewardjetpackboost.meta.h"

void cGcRewardJetpackBoost::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29794032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardJetpackBoost::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardJetpackBoost::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29802992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

