#include "gchazarddraindifficultyoption.meta.h"

void cGcHazardDrainDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22846256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHazardDrainDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22848192);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHazardDrainDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22849088);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

