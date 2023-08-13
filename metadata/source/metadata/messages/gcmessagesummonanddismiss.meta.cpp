#include "gcmessagesummonanddismiss.meta.h"

void cGcMessageSummonAndDismiss::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30997936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageSummonAndDismiss::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31000256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMessageSummonAndDismiss::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

