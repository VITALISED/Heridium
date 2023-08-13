#include "gcfuelusedifficultyoption.meta.h"

void cGcFuelUseDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22845584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFuelUseDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22848032);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFuelUseDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

