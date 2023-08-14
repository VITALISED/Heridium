#include "gcgeneratedbasetemplatestable.meta.h"

void cGcGeneratedBaseTemplatesTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34206640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratedBaseTemplatesTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34212208);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213632);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34191040);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34196704);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcGeneratedBaseTemplatesTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34174336);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34178208);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcGeneratedBaseTemplatesTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34184672);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcGeneratedBaseTemplatesTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34200560);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcGeneratedBaseTemplatesTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34195248);
    return classPtrDestroyFunc(lPtr);
}

