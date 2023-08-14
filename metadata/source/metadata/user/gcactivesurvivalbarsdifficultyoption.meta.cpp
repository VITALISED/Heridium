#include "gcactivesurvivalbarsdifficultyoption.meta.h"

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23061872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcActiveSurvivalBarsDifficultyOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23068624);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070224);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23053056);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcActiveSurvivalBarsDifficultyOption::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23042128);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23044448);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcActiveSurvivalBarsDifficultyOption::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23048544);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcActiveSurvivalBarsDifficultyOption::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23059104);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcActiveSurvivalBarsDifficultyOption::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23057792);
    return classPtrDestroyFunc(lPtr);
}

