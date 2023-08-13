#include "gcspawndensitylist.meta.h"

void cGcSpawnDensityList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23867424);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpawnDensityList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpawnDensityList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

