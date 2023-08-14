#include "tkaxisimagelookup.meta.h"

void cTkAxisImageLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21093552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAxisImageLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21097760);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkAxisImageLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21098976);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkAxisImageLookup::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21085872);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkAxisImageLookup::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21090816);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkAxisImageLookup::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21077200);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkAxisImageLookup::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21079072);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkAxisImageLookup::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21082272);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkAxisImageLookup::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21091904);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkAxisImageLookup::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21089424);
    return classPtrDestroyFunc(lPtr);
}

