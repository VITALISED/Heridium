#include "gcpulseencounterspawnobject.meta.h"

void cGcPulseEncounterSpawnObject::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23388592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPulseEncounterSpawnObject::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23391136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPulseEncounterSpawnObject::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23392128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

