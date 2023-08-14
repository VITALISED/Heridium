#include "gctextureprefetchdata.meta.h"

void cGcTexturePrefetchData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31505088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTexturePrefetchData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31507296);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcTexturePrefetchData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31508304);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcTexturePrefetchData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31495744);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcTexturePrefetchData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31497568);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcTexturePrefetchData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31481776);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcTexturePrefetchData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31486800);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcTexturePrefetchData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31491152);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcTexturePrefetchData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31499136);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcTexturePrefetchData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31497152);
    return classPtrDestroyFunc(lPtr);
}

