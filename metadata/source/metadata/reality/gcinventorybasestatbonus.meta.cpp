#include "gcinventorybasestatbonus.meta.h"

void cGcInventoryBaseStatBonus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30588336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryBaseStatBonus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30591040);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInventoryBaseStatBonus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592304);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInventoryBaseStatBonus::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30573904);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInventoryBaseStatBonus::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30576816);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInventoryBaseStatBonus::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30557008);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInventoryBaseStatBonus::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30562288);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInventoryBaseStatBonus::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30567744);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInventoryBaseStatBonus::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30580112);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInventoryBaseStatBonus::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30575808);
    return classPtrDestroyFunc(lPtr);
}

