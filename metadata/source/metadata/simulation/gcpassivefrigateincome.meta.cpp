#include "gcpassivefrigateincome.meta.h"

void cGcPassiveFrigateIncome::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26478432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPassiveFrigateIncome::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480800);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPassiveFrigateIncome::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481984);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPassiveFrigateIncome::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26463344);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPassiveFrigateIncome::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26466688);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPassiveFrigateIncome::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26445968);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPassiveFrigateIncome::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26451344);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPassiveFrigateIncome::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26456928);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPassiveFrigateIncome::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26470272);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPassiveFrigateIncome::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26465024);
    return classPtrDestroyFunc(lPtr);
}

