#include "gcrewardcommunitycontribution.meta.h"

void cGcRewardCommunityContribution::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29974816);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCommunityContribution::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCommunityContribution::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

