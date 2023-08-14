#include "tklsystemlocatorentry.meta.h"

void cTkLSystemLocatorEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21376560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemLocatorEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378944);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkLSystemLocatorEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21380000);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkLSystemLocatorEntry::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21364560);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkLSystemLocatorEntry::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21367072);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkLSystemLocatorEntry::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21350896);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkLSystemLocatorEntry::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21354976);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkLSystemLocatorEntry::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21359552);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkLSystemLocatorEntry::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21370272);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkLSystemLocatorEntry::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21366320);
    return classPtrDestroyFunc(lPtr);
}

