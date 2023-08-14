#include "gccombateffectdamagemultiplier.meta.h"

void cGcCombatEffectDamageMultiplier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24500240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatEffectDamageMultiplier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24503248);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCombatEffectDamageMultiplier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24504016);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCombatEffectDamageMultiplier::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24494832);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCombatEffectDamageMultiplier::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24498048);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCombatEffectDamageMultiplier::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24488656);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCombatEffectDamageMultiplier::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24489824);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCombatEffectDamageMultiplier::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24492208);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCombatEffectDamageMultiplier::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24499184);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCombatEffectDamageMultiplier::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24497424);
    return classPtrDestroyFunc(lPtr);
}

