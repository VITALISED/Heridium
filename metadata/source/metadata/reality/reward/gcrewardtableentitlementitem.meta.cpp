#include "gcrewardtableentitlementitem.meta.h"

void cGcRewardTableEntitlementItem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28984720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTableEntitlementItem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28988032);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTableEntitlementItem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

