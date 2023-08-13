#include "gcdifficultysettingsreplicatedstate.meta.h"

void cGcDifficultySettingsReplicatedState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22843552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultySettingsReplicatedState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847712);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultySettingsReplicatedState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

