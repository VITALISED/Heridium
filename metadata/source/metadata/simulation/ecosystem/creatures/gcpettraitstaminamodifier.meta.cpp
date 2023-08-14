#include "gcpettraitstaminamodifier.meta.h"

void cGcPetTraitStaminaModifier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27762800);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetTraitStaminaModifier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27764592);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPetTraitStaminaModifier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27765184);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPetTraitStaminaModifier::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27756736);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPetTraitStaminaModifier::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27758944);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPetTraitStaminaModifier::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27748240);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPetTraitStaminaModifier::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27750528);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPetTraitStaminaModifier::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27753552);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPetTraitStaminaModifier::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27759280);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPetTraitStaminaModifier::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27758000);
    return classPtrDestroyFunc(lPtr);
}

