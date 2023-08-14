#include "gcdeprecatedassetstable.meta.h"

void cGcDeprecatedAssetsTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27446896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDeprecatedAssetsTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452320);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcDeprecatedAssetsTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453728);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcDeprecatedAssetsTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27436912);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcDeprecatedAssetsTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27442336);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcDeprecatedAssetsTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27426256);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcDeprecatedAssetsTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27428096);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcDeprecatedAssetsTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27432864);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcDeprecatedAssetsTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27443520);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcDeprecatedAssetsTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27441136);
    return classPtrDestroyFunc(lPtr);
}

