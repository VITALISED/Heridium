#include "gcseasonpetconstraints.meta.h"

void cGcSeasonPetConstraints::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33222000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonPetConstraints::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33228832);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonPetConstraints::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

