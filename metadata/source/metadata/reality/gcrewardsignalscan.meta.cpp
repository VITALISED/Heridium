#include "gcrewardsignalscan.meta.h"

void cGcRewardSignalScan::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29625536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSignalScan::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSignalScan::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

