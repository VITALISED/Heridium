#include "gcweeklyrecurrence.meta.h"

void cGcWeeklyRecurrence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25536288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeeklyRecurrence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25538912);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeeklyRecurrence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25540080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

