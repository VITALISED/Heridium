#include "gcunlockableplatformrewards.meta.h"

void cGcUnlockablePlatformRewards::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29089920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockablePlatformRewards::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29093728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockablePlatformRewards::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29094864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

