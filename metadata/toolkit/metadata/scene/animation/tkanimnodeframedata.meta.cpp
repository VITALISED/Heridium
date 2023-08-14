#include "tkanimnodeframedata.meta.h"

void cTkAnimNodeFrameData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21932016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimNodeFrameData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21936416);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkAnimNodeFrameData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21937680);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkAnimNodeFrameData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21922208);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkAnimNodeFrameData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21927920);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkAnimNodeFrameData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21911760);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkAnimNodeFrameData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21914352);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkAnimNodeFrameData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21918144);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkAnimNodeFrameData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21929568);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkAnimNodeFrameData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21926112);
    return classPtrDestroyFunc(lPtr);
}

