#include "gccreaturehostilitydifficultyoption.meta.h"

void cGcCreatureHostilityDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23064096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureHostilityDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069184);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureHostilityDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

