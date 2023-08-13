#include "gcplayerexperienceasteroidcreaturespawntable.meta.h"

void cGcPlayerExperienceAsteroidCreatureSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34657312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerExperienceAsteroidCreatureSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerExperienceAsteroidCreatureSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

