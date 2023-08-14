#include "gccostnpchabitation.meta.h"

void cGcCostNPCHabitation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30679136);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostNPCHabitation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30685840);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCostNPCHabitation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687808);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCostNPCHabitation::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30665360);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCostNPCHabitation::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30671664);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCostNPCHabitation::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30651808);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCostNPCHabitation::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30655424);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCostNPCHabitation::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30659664);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCostNPCHabitation::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30673408);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCostNPCHabitation::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30670224);
    return classPtrDestroyFunc(lPtr);
}

