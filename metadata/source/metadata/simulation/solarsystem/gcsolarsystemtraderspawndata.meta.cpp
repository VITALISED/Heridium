#include "gcsolarsystemtraderspawndata.meta.h"

void cGcSolarSystemTraderSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24122608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSolarSystemTraderSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSolarSystemTraderSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125600);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

