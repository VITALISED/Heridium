#include "gcdifficultysettingtype.meta.h"

void cGcDifficultySettingType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22842272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultySettingType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultySettingType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

