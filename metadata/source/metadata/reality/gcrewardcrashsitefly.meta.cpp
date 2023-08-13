#include "gcrewardcrashsitefly.meta.h"

void cGcRewardCrashSiteFly::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29975968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCrashSiteFly::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCrashSiteFly::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29981008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

