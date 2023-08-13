#include "gcrewardchangeglobalmission.meta.h"

void cGcRewardChangeGlobalMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29973760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardChangeGlobalMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardChangeGlobalMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

