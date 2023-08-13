#include "gcmissionconditionelevation.meta.h"

void cGcMissionConditionElevation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26154832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionElevation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26158736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConditionElevation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26160256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

