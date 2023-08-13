#include "gcdifficultyconfig.meta.h"

void cGcDifficultyConfig::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22954640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultyConfig::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22958368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultyConfig::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22959136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

