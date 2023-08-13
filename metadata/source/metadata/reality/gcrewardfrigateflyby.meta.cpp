#include "gcrewardfrigateflyby.meta.h"

void cGcRewardFrigateFlyby::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29883168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardFrigateFlyby::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29886592);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardFrigateFlyby::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

