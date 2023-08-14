#include "gcfreighterdungeonstable.meta.h"

void cGcFreighterDungeonsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34204720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterDungeonsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211728);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFreighterDungeonsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213344);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFreighterDungeonsTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34189296);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFreighterDungeonsTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34196192);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFreighterDungeonsTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34173696);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFreighterDungeonsTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34176944);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFreighterDungeonsTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34183168);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFreighterDungeonsTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34199696);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFreighterDungeonsTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34194704);
    return classPtrDestroyFunc(lPtr);
}

