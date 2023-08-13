#include "gcrewardcompletemultimission.meta.h"

void cGcRewardCompleteMultiMission::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29975712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardCompleteMultiMission::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29979440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardCompleteMultiMission::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

