#include "tkvoxelgeneratorregiondata.meta.h"

void cTkVoxelGeneratorRegionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20915296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVoxelGeneratorRegionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20916896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVoxelGeneratorRegionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

