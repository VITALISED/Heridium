#include "tkdynamicchaincomponentdata.meta.h"

void cTkDynamicChainComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22311872);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkDynamicChainComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314896);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkDynamicChainComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315616);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkDynamicChainComponentData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22305552);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkDynamicChainComponentData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22308752);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkDynamicChainComponentData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22296576);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkDynamicChainComponentData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22299536);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkDynamicChainComponentData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22302592);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkDynamicChainComponentData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22309616);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkDynamicChainComponentData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22307728);
    return classPtrDestroyFunc(lPtr);
}

