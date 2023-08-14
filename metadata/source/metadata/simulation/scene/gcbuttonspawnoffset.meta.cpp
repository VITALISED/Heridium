#include "gcbuttonspawnoffset.meta.h"

void cGcButtonSpawnOffset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24309728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcButtonSpawnOffset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313200);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcButtonSpawnOffset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314048);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcButtonSpawnOffset::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24304288);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcButtonSpawnOffset::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24307456);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcButtonSpawnOffset::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24297232);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcButtonSpawnOffset::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24299056);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcButtonSpawnOffset::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24301712);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcButtonSpawnOffset::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24308192);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcButtonSpawnOffset::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24306784);
    return classPtrDestroyFunc(lPtr);
}

