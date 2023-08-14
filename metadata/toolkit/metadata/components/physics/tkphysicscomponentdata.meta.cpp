#include "tkphysicscomponentdata.meta.h"

void cTkPhysicsComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22313408);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkPhysicsComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22315136);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkPhysicsComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315760);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkPhysicsComponentData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22306352);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkPhysicsComponentData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22308880);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkPhysicsComponentData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22297104);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkPhysicsComponentData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22300528);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkPhysicsComponentData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22303360);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkPhysicsComponentData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22309712);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkPhysicsComponentData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22307968);
    return classPtrDestroyFunc(lPtr);
}

