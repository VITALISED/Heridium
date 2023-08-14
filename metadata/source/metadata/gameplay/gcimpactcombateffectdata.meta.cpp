#include "gcimpactcombateffectdata.meta.h"

void cGcImpactCombatEffectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34745904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcImpactCombatEffectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748608);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcImpactCombatEffectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749488);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcImpactCombatEffectData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34737936);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcImpactCombatEffectData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34740592);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcImpactCombatEffectData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34726976);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcImpactCombatEffectData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34731216);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcImpactCombatEffectData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34734464);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcImpactCombatEffectData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34742144);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcImpactCombatEffectData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34739744);
    return classPtrDestroyFunc(lPtr);
}

