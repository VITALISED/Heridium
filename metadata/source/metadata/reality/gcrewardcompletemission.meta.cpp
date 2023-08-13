#include "gcrewardcompletemission.meta.h"

void cGcRewardCompleteMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29975456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCompleteMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCompleteMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980768);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

