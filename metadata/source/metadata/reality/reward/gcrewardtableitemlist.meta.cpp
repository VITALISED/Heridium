#include "gcrewardtableitemlist.meta.h"

void cGcRewardTableItemList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28985040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTableItemList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28988112);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTableItemList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

