#include "gcrewardmissionseeded.meta.h"

void cGcRewardMissionSeeded::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29796176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMissionSeeded::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMissionSeeded::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803328);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

