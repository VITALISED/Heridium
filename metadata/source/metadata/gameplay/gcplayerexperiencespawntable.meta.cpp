#include "gcplayerexperiencespawntable.meta.h"

void cGcPlayerExperienceSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34658576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerExperienceSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerExperienceSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34663008);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

