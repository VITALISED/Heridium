#include "gcmissionconditioncreatureslots.meta.h"

void cGcMissionConditionCreatureSlots::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26152400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionCreatureSlots::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26158096);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConditionCreatureSlots::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26159920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

