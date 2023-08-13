#include "gcdamagereceiveddifficultyoption.meta.h"

void cGcDamageReceivedDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23065056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDamageReceivedDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069424);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDamageReceivedDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

