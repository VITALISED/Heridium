#include "gcfleetfrigatesavedata.meta.h"

void cGcFleetFrigateSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33949184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFleetFrigateSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33952784);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFleetFrigateSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33953856);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFleetFrigateSaveData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33931184);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFleetFrigateSaveData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33936336);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFleetFrigateSaveData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33901664);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFleetFrigateSaveData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33910992);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFleetFrigateSaveData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33920896);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFleetFrigateSaveData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33938624);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFleetFrigateSaveData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33934064);
    return classPtrDestroyFunc(lPtr);
}

