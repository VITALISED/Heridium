#include "gcrewardmissionoverride.meta.h"

void cGcRewardMissionOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29795888);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardMissionOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardMissionOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29803280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

