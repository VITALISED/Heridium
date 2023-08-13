#include "gcrewardadvanceportalstate.meta.h"

void cGcRewardAdvancePortalState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29972320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardAdvancePortalState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardAdvancePortalState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

