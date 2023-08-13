#include "gcmissionconditionextrasuitslots.meta.h"

void cGcMissionConditionExtraSuitSlots::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26080976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionExtraSuitSlots::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26089664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMissionConditionExtraSuitSlots::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26091824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

