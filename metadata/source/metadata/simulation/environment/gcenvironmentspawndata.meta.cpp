#include "gcenvironmentspawndata.meta.h"

void cGcEnvironmentSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27231040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEnvironmentSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27235408);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEnvironmentSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

