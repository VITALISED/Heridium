#include "gcpeteggspeciesoverridetable.meta.h"

void cGcPetEggSpeciesOverrideTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27450768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetEggSpeciesOverrideTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetEggSpeciesOverrideTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

