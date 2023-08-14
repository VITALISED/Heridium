#include "tkmaterialalternative.meta.h"

void cTkMaterialAlternative::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21810096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialAlternative::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21814400);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkMaterialAlternative::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21815440);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkMaterialAlternative::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21803968);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkMaterialAlternative::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkMaterialAlternative::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21796848);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkMaterialAlternative::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21798384);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkMaterialAlternative::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21801008);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkMaterialAlternative::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21809200);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkMaterialAlternative::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21807216);
    return classPtrDestroyFunc(lPtr);
}

