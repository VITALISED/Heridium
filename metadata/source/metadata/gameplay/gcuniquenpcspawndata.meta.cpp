#include "gcuniquenpcspawndata.meta.h"

void cGcUniqueNPCSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34558096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUniqueNPCSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34560080);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcUniqueNPCSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560912);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcUniqueNPCSpawnData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34549504);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcUniqueNPCSpawnData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34552000);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcUniqueNPCSpawnData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34540160);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcUniqueNPCSpawnData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34542960);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcUniqueNPCSpawnData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34546080);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcUniqueNPCSpawnData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34553792);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcUniqueNPCSpawnData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34550928);
    return classPtrDestroyFunc(lPtr);
}

