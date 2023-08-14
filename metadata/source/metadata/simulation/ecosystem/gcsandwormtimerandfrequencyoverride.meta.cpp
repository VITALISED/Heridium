#include "gcsandwormtimerandfrequencyoverride.meta.h"

void cGcSandwormTimerAndFrequencyOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSandwormTimerAndFrequencyOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453520);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSandwormTimerAndFrequencyOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454448);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSandwormTimerAndFrequencyOverride::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27440496);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSandwormTimerAndFrequencyOverride::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSandwormTimerAndFrequencyOverride::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27427696);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSandwormTimerAndFrequencyOverride::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27432224);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSandwormTimerAndFrequencyOverride::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27436160);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSandwormTimerAndFrequencyOverride::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27446064);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSandwormTimerAndFrequencyOverride::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27442160);
    return classPtrDestroyFunc(lPtr);
}

