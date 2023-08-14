#include "gcinputactioninfomap.meta.h"

void cGcInputActionInfoMap::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31118912);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInputActionInfoMap::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31123744);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInputActionInfoMap::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125120);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInputActionInfoMap::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31107216);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInputActionInfoMap::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31112576);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInputActionInfoMap::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31095568);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInputActionInfoMap::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31098512);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInputActionInfoMap::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31102528);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInputActionInfoMap::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31114736);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInputActionInfoMap::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31110864);
    return classPtrDestroyFunc(lPtr);
}

