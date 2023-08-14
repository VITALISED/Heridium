#include "tkanimanimnode.meta.h"

void cTkAnimAnimNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22503440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimAnimNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22506080);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkAnimAnimNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22507072);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkAnimAnimNode::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22492464);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkAnimAnimNode::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22494992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkAnimAnimNode::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22481104);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkAnimAnimNode::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22484288);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkAnimAnimNode::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22488384);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkAnimAnimNode::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22498064);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkAnimAnimNode::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22494240);
    return classPtrDestroyFunc(lPtr);
}

