#include "gcpeteggtraitmodifieroverridedata.meta.h"

void cGcPetEggTraitModifierOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451024);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetEggTraitModifierOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453360);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454352);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27439984);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27443008);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPetEggTraitModifierOverrideData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27427424);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27431696);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPetEggTraitModifierOverrideData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27435712);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPetEggTraitModifierOverrideData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27445776);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPetEggTraitModifierOverrideData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27442016);
    return classPtrDestroyFunc(lPtr);
}

