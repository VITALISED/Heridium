#include "gcmissionschedulestable.meta.h"

void cGcMissionSchedulesTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25531168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSchedulesTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionSchedulesTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

