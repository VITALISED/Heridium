#include "tkvoxelgeneratordata.meta.h"

void cTkVoxelGeneratorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20914976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVoxelGeneratorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20916816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVoxelGeneratorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

