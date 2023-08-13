#include "gcrewardwikitopic.meta.h"

void cGcRewardWikiTopic::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29447744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardWikiTopic::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29451920);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardWikiTopic::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

