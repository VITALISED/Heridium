#include "gcrewardpolicescansignal.meta.h"

void cGcRewardPoliceScanSignal::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29710800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardPoliceScanSignal::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29717584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardPoliceScanSignal::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

