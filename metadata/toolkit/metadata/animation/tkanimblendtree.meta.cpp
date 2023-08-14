#include "tkanimblendtree.meta.h"

void cTkAnimBlendTree::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22419440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimBlendTree::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425136);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkAnimBlendTree::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426416);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkAnimBlendTree::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22411376);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkAnimBlendTree::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22416496);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkAnimBlendTree::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22402960);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkAnimBlendTree::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22404624);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkAnimBlendTree::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22407680);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkAnimBlendTree::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22418400);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkAnimBlendTree::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22415440);
    return classPtrDestroyFunc(lPtr);
}

