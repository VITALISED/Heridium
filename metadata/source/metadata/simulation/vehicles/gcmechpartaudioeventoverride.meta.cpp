#include "gcmechpartaudioeventoverride.meta.h"

void cGcMechPartAudioEventOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23265488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechPartAudioEventOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23267232);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMechPartAudioEventOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267792);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMechPartAudioEventOverride::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23260400);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMechPartAudioEventOverride::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23262720);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMechPartAudioEventOverride::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23254496);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMechPartAudioEventOverride::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23255792);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMechPartAudioEventOverride::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23257968);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMechPartAudioEventOverride::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23263200);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMechPartAudioEventOverride::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23262144);
    return classPtrDestroyFunc(lPtr);
}

