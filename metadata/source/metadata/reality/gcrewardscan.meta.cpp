#include "gcrewardscan.meta.h"

void cGcRewardScan::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29715264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardScan::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29718624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardScan::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29720176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

