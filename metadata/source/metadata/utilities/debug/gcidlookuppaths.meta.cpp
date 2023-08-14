#include "gcidlookuppaths.meta.h"

void cGcIDLookupPaths::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22625728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcIDLookupPaths::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22631872);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcIDLookupPaths::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633280);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcIDLookupPaths::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22614976);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcIDLookupPaths::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22621776);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcIDLookupPaths::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22603184);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcIDLookupPaths::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22605360);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcIDLookupPaths::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22610112);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcIDLookupPaths::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22623328);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcIDLookupPaths::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22620368);
    return classPtrDestroyFunc(lPtr);
}

