#include "gcrewardstanding.meta.h"

void cGcRewardStanding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29527392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardStanding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29531136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardStanding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29532192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

