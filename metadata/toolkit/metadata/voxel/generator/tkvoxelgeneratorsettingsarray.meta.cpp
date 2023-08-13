#include "tkvoxelgeneratorsettingsarray.meta.h"

void cTkVoxelGeneratorSettingsArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20915616);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVoxelGeneratorSettingsArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20916976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVoxelGeneratorSettingsArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

