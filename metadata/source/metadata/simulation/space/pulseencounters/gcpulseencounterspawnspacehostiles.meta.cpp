#include "gcpulseencounterspawnspacehostiles.meta.h"

void cGcPulseEncounterSpawnSpaceHostiles::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23389120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPulseEncounterSpawnSpaceHostiles::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23391296);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPulseEncounterSpawnSpaceHostiles::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23392208);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

