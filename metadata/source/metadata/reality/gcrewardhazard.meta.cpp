#include "gcrewardhazard.meta.h"

void cGcRewardHazard::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29883648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardHazard::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29886672);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardHazard::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

