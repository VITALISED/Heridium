#include "gcrewardinterventionresponse.meta.h"

void cGcRewardInterventionResponse::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29793424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardInterventionResponse::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29801040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardInterventionResponse::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29802896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

