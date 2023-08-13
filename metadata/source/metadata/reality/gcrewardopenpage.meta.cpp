#include "gcrewardopenpage.meta.h"

void cGcRewardOpenPage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29800128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardOpenPage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29802640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardOpenPage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

