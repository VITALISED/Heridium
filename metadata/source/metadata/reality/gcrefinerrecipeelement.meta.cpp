#include "gcrefinerrecipeelement.meta.h"

void cGcRefinerRecipeElement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29971280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRefinerRecipeElement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29978320);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcRefinerRecipeElement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29980144);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcRefinerRecipeElement::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(29958160);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcRefinerRecipeElement::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(29965584);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcRefinerRecipeElement::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(29944480);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcRefinerRecipeElement::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(29948256);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcRefinerRecipeElement::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(29952624);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcRefinerRecipeElement::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(29966320);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcRefinerRecipeElement::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(29963680);
    return classPtrDestroyFunc(lPtr);
}

