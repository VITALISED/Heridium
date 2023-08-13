#include "gcrewardmission.meta.h"

void cGcRewardMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29794688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

