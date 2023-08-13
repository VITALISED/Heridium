#include "gcexperiencespawntable.meta.h"

void cGcExperienceSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30894912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExperienceSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

