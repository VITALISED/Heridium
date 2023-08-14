#include "gcpersistentterrainedits.meta.h"

void cGcPersistentTerrainEdits::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33118400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentTerrainEdits::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33122896);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPersistentTerrainEdits::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124176);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPersistentTerrainEdits::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33109840);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPersistentTerrainEdits::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33114304);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPersistentTerrainEdits::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33100224);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPersistentTerrainEdits::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33102224);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPersistentTerrainEdits::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33105632);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPersistentTerrainEdits::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33115968);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPersistentTerrainEdits::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33113456);
    return classPtrDestroyFunc(lPtr);
}

