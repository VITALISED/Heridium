#include "tknetreplicatedentitycomponentdata.meta.h"

void cTkNetReplicatedEntityComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22312896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNetReplicatedEntityComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22315056);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkNetReplicatedEntityComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315712);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkNetReplicatedEntityComponentData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22306112);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkNetReplicatedEntityComponentData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22308816);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkNetReplicatedEntityComponentData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22296848);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkNetReplicatedEntityComponentData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22300160);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkNetReplicatedEntityComponentData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22303136);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkNetReplicatedEntityComponentData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22309680);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkNetReplicatedEntityComponentData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22307872);
    return classPtrDestroyFunc(lPtr);
}

