#include "gcrewardworker.meta.h"

void cGcRewardWorker::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29448032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardWorker::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29452000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardWorker::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29453264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

