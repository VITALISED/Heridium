#include "gcplayerexperiencespawndata.meta.h"

void cGcPlayerExperienceSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34658176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerExperienceSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661856);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerExperienceSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662960);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

