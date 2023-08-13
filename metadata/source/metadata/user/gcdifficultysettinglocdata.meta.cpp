#include "gcdifficultysettinglocdata.meta.h"

void cGcDifficultySettingLocData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22841968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultySettingLocData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultySettingLocData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

