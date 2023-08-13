#include "gccombattimerdifficultyoption.meta.h"

void cGcCombatTimerDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23063776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatTimerDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCombatTimerDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

