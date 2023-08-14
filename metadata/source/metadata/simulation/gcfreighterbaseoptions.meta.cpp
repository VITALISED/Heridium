#include "gcfreighterbaseoptions.meta.h"

void cGcFreighterBaseOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26472128);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterBaseOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479360);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFreighterBaseOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481120);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFreighterBaseOptions::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26458464);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFreighterBaseOptions::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26465680);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFreighterBaseOptions::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26443872);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFreighterBaseOptions::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26447264);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFreighterBaseOptions::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26452672);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFreighterBaseOptions::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26467824);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFreighterBaseOptions::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26463952);
    return classPtrDestroyFunc(lPtr);
}

