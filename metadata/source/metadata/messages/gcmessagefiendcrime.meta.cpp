#include "gcmessagefiendcrime.meta.h"

void cGcMessageFiendCrime::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30994480);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageFiendCrime::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999616);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMessageFiendCrime::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000912);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMessageFiendCrime::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30983552);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMessageFiendCrime::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30988208);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMessageFiendCrime::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30971856);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMessageFiendCrime::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30975088);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMessageFiendCrime::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30978864);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMessageFiendCrime::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30989696);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMessageFiendCrime::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30987104);
    return classPtrDestroyFunc(lPtr);
}

