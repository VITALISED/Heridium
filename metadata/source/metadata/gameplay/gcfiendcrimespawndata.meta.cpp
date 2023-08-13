#include "gcfiendcrimespawndata.meta.h"

void cGcFiendCrimeSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34743984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFiendCrimeSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748128);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFiendCrimeSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

