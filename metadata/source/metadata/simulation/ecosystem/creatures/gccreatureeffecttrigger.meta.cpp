#include "gccreatureeffecttrigger.meta.h"

void cGcCreatureEffectTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27873200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureEffectTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878496);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCreatureEffectTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879936);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCreatureEffectTrigger::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27862464);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCreatureEffectTrigger::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27868384);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCreatureEffectTrigger::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27850640);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCreatureEffectTrigger::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27853776);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCreatureEffectTrigger::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27857888);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCreatureEffectTrigger::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27870128);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCreatureEffectTrigger::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27866624);
    return classPtrDestroyFunc(lPtr);
}

