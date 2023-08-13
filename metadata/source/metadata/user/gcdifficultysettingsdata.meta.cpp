#include "gcdifficultysettingsdata.meta.h"

void cGcDifficultySettingsData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22843136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultySettingsData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultySettingsData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

