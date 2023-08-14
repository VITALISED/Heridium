#include "gcatlasdiscovery.meta.h"

void cGcAtlasDiscovery::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35107296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasDiscovery::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110848);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcAtlasDiscovery::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111728);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcAtlasDiscovery::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(35100976);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcAtlasDiscovery::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(35104128);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcAtlasDiscovery::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(35092080);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcAtlasDiscovery::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(35094368);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcAtlasDiscovery::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(35097648);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcAtlasDiscovery::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(35105424);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcAtlasDiscovery::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(35103472);
    return classPtrDestroyFunc(lPtr);
}

