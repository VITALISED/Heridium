#include "gcrewardwantedlevel.meta.h"

void cGcRewardWantedLevel::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29446752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardWantedLevel::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardWantedLevel::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

