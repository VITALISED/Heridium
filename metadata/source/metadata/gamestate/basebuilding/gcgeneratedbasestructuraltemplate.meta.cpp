#include "gcgeneratedbasestructuraltemplate.meta.h"

void cGcGeneratedBaseStructuralTemplate::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34206320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratedBaseStructuralTemplate::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212128);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213584);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34190752);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34196656);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcGeneratedBaseStructuralTemplate::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34174208);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34178000);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcGeneratedBaseStructuralTemplate::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34184416);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcGeneratedBaseStructuralTemplate::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34200080);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcGeneratedBaseStructuralTemplate::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34195120);
    return classPtrDestroyFunc(lPtr);
}

