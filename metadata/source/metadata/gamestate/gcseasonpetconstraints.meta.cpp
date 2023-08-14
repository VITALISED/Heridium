#include "gcseasonpetconstraints.meta.h"

void cGcSeasonPetConstraints::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33222000);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonPetConstraints::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33228832);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSeasonPetConstraints::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230272);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSeasonPetConstraints::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33213328);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSeasonPetConstraints::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33219056);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSeasonPetConstraints::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33202592);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSeasonPetConstraints::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33205424);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSeasonPetConstraints::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33209040);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSeasonPetConstraints::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33220272);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSeasonPetConstraints::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33217984);
    return classPtrDestroyFunc(lPtr);
}

