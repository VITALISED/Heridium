#include "gcpeteggspeciesoverridedata.meta.h"

void cGcPetEggSpeciesOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27450480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetEggSpeciesOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetEggSpeciesOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454256);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

