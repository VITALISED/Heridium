#include "gcrewardfreestamina.meta.h"

void cGcRewardFreeStamina::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29881792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardFreeStamina::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29886192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardFreeStamina::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

