#include "gcplayerexperienceasteroidcreaturespawndata.meta.h"

void cGcPlayerExperienceAsteroidCreatureSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34657024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerExperienceAsteroidCreatureSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerExperienceAsteroidCreatureSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662816);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

