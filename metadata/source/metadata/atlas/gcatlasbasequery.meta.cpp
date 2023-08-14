#include "gcatlasbasequery.meta.h"

void cGcAtlasBaseQuery::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(35106544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAtlasBaseQuery::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(35110688);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcAtlasBaseQuery::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(35111632);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcAtlasBaseQuery::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(35100448);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcAtlasBaseQuery::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(35103904);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcAtlasBaseQuery::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(35091568);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcAtlasBaseQuery::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(35093952);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcAtlasBaseQuery::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(35097168);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcAtlasBaseQuery::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(35105360);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcAtlasBaseQuery::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(35103376);
    return classPtrDestroyFunc(lPtr);
}

