#include "gcpulseencounterspawnconditions.meta.h"

void cGcPulseEncounterSpawnConditions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23387760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPulseEncounterSpawnConditions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPulseEncounterSpawnConditions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23392032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

