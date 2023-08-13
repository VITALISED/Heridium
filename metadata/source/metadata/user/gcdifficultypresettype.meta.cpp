#include "gcdifficultypresettype.meta.h"

void cGcDifficultyPresetType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22957696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultyPresetType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22958928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultyPresetType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22959472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

