#include "gcbiomelistperstartype.meta.h"

void cGcBiomeListPerStarType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24229296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeListPerStarType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234048);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBiomeListPerStarType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235248);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBiomeListPerStarType::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24219408);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBiomeListPerStarType::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24224560);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBiomeListPerStarType::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24206208);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBiomeListPerStarType::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24209472);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBiomeListPerStarType::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24214320);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBiomeListPerStarType::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24225872);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBiomeListPerStarType::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24223536);
    return classPtrDestroyFunc(lPtr);
}
