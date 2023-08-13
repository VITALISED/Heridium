#include "gccostsentinelblockstatus.meta.h"

void cGcCostSentinelBlockStatus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30682656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostSentinelBlockStatus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30686640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostSentinelBlockStatus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30688096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

