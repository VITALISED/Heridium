#include "gcrewardproctechproduct.meta.h"

void cGcRewardProcTechProduct::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29711040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardProcTechProduct::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29717664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardProcTechProduct::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29719552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

