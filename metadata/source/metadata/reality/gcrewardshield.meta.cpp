#include "gcrewardshield.meta.h"

void cGcRewardShield::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29623904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardShield::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29629488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardShield::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29631072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

