#include "gclaunchfuelcostdifficultyoption.meta.h"

void cGcLaunchFuelCostDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22720864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLaunchFuelCostDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22726144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLaunchFuelCostDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

