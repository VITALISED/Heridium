#include "gcrewardtableitem.meta.h"

void cGcRewardTableItem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29441456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTableItem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTableItem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452496);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

