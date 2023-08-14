#include "gcuaprotectedlocations.meta.h"

void cGcUAProtectedLocations::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33227232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUAProtectedLocations::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229872);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcUAProtectedLocations::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230896);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcUAProtectedLocations::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33216768);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcUAProtectedLocations::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33220032);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcUAProtectedLocations::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33204544);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcUAProtectedLocations::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33208144);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcUAProtectedLocations::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33212256);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcUAProtectedLocations::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33221840);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcUAProtectedLocations::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33218768);
    return classPtrDestroyFunc(lPtr);
}

