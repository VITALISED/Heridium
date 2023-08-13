#include "gcrewardshipslot.meta.h"

void cGcRewardShipSlot::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29624960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardShipSlot::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardShipSlot::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

