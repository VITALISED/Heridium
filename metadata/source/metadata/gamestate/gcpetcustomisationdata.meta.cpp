#include "gcpetcustomisationdata.meta.h"

void cGcPetCustomisationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33785760);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetCustomisationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33790048);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetCustomisationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

