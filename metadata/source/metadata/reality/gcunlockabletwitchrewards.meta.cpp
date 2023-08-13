#include "gcunlockabletwitchrewards.meta.h"

void cGcUnlockableTwitchRewards::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29091744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUnlockableTwitchRewards::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUnlockableTwitchRewards::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

