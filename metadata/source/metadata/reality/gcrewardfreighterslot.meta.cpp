#include "gcrewardfreighterslot.meta.h"

void cGcRewardFreighterSlot::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29882448);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardFreighterSlot::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29886432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardFreighterSlot::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

