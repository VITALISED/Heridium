#include "gcexperiencedebugtriggerinput.meta.h"

void cGcExperienceDebugTriggerInput::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30894528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceDebugTriggerInput::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExperienceDebugTriggerInput::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898288);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

