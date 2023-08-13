#include "gcexperiencedebugtriggeraction.meta.h"

void cGcExperienceDebugTriggerAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30894080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceDebugTriggerAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExperienceDebugTriggerAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898192);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

