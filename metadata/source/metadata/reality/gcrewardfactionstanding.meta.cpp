#include "gcrewardfactionstanding.meta.h"

void cGcRewardFactionStanding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29880528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardFactionStanding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29885872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardFactionStanding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

