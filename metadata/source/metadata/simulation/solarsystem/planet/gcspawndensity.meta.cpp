#include "gcspawndensity.meta.h"

void cGcSpawnDensity::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23867136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpawnDensity::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpawnDensity::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

