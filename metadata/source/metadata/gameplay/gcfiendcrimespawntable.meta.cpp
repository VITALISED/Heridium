#include "gcfiendcrimespawntable.meta.h"

void cGcFiendCrimeSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34744288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFiendCrimeSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFiendCrimeSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

