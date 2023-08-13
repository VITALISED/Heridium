#include "gcexperiencetimers.meta.h"

void cGcExperienceTimers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24229616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceTimers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExperienceTimers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

