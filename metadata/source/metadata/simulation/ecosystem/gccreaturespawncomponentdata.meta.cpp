#include "gccreaturespawncomponentdata.meta.h"

void cGcCreatureSpawnComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27547120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureSpawnComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27549232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureSpawnComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27550112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

