#include "gcbuildingpartsearchtype.meta.h"

void cGcBuildingPartSearchType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25051696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingPartSearchType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25059856);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBuildingPartSearchType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061616);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBuildingPartSearchType::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(25041232);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBuildingPartSearchType::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(25047632);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBuildingPartSearchType::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(25025408);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBuildingPartSearchType::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(25030096);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBuildingPartSearchType::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(25036384);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBuildingPartSearchType::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(25048016);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBuildingPartSearchType::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(25046528);
    return classPtrDestroyFunc(lPtr);
}

