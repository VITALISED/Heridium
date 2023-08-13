#include "gcrewardsetcurrentmission.meta.h"

void cGcRewardSetCurrentMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29621136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardSetCurrentMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29628848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardSetCurrentMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29630592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

