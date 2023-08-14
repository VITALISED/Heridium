#include "tkheavyaircollection.meta.h"

void cTkHeavyAirCollection::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21372304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkHeavyAirCollection::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21377984);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkHeavyAirCollection::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379424);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkHeavyAirCollection::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21361520);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkHeavyAirCollection::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21366784);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkHeavyAirCollection::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21349568);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkHeavyAirCollection::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21352432);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkHeavyAirCollection::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21356784);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkHeavyAirCollection::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21368416);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkHeavyAirCollection::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21365568);
    return classPtrDestroyFunc(lPtr);
}

