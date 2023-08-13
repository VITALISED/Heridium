#include "gcpulseencounterspawnfrigateflyby.meta.h"

void cGcPulseEncounterSpawnFrigateFlyby::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23388080);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPulseEncounterSpawnFrigateFlyby::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23391056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPulseEncounterSpawnFrigateFlyby::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23392080);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

