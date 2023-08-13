#include "gcrewardscaneventoutcome.meta.h"

void cGcRewardScanEventOutcome::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29716448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardScanEventOutcome::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718864);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardScanEventOutcome::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

