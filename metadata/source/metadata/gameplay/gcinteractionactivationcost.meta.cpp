#include "gcinteractionactivationcost.meta.h"

void cGcInteractionActivationCost::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34746384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionActivationCost::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748688);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInteractionActivationCost::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749536);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInteractionActivationCost::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(34738176);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInteractionActivationCost::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(34740640);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInteractionActivationCost::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(34727120);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInteractionActivationCost::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(34731376);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInteractionActivationCost::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(34734672);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInteractionActivationCost::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(34742176);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInteractionActivationCost::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(34739792);
    return classPtrDestroyFunc(lPtr);
}

