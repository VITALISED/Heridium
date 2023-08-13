#include "gcdamagegivendifficultyoption.meta.h"

void cGcDamageGivenDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23064736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDamageGivenDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069344);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDamageGivenDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

