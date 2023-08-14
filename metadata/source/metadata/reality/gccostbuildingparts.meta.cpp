#include "gccostbuildingparts.meta.h"

void cGcCostBuildingParts::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30779824);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostBuildingParts::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30785120);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCostBuildingParts::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786944);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCostBuildingParts::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30764848);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCostBuildingParts::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30770416);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCostBuildingParts::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30750320);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCostBuildingParts::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30754144);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCostBuildingParts::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30758816);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCostBuildingParts::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30773312);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCostBuildingParts::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30768960);
    return classPtrDestroyFunc(lPtr);
}

