#include "gcrewardtrigger.meta.h"

void cGcRewardTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29443728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

