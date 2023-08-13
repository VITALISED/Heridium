#include "gcactivesurvivalbarsdifficultyoption.meta.h"

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23061872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcActiveSurvivalBarsDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23068624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070224);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

