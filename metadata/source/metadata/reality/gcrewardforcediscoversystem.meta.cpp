#include "gcrewardforcediscoversystem.meta.h"

void cGcRewardForceDiscoverSystem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29881040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardForceDiscoverSystem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29885952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardForceDiscoverSystem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29887440);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

