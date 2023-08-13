#include "tkvoxelgeneratorsettingstypes.meta.h"

void cTkVoxelGeneratorSettingsTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20916416);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVoxelGeneratorSettingsTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20917136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVoxelGeneratorSettingsTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

