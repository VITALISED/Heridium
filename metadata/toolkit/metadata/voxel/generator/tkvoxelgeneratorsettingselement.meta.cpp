#include "tkvoxelgeneratorsettingselement.meta.h"

void cTkVoxelGeneratorSettingsElement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20915968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkVoxelGeneratorSettingsElement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20917056);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkVoxelGeneratorSettingsElement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

