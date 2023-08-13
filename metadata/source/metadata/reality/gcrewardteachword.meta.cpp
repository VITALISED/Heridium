#include "gcrewardteachword.meta.h"

void cGcRewardTeachWord::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29441792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardTeachWord::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29450560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardTeachWord::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29452544);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

