#include "gcexperiencedebugtriggeractiontypes.meta.h"

void cGcExperienceDebugTriggerActionTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30894304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceDebugTriggerActionTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

