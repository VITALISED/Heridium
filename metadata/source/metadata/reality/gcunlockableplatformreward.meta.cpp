#include "gcunlockableplatformreward.meta.h"

void cGcUnlockablePlatformReward::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29089632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockablePlatformReward::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093648);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockablePlatformReward::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

