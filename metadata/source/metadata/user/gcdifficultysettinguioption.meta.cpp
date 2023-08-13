#include "gcdifficultysettinguioption.meta.h"

void cGcDifficultySettingUIOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22842592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultySettingUIOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultySettingUIOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

