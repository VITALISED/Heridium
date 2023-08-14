#include "tklsysteminnerrule.meta.h"

void cTkLSystemInnerRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21376288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemInnerRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378864);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkLSystemInnerRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379952);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkLSystemInnerRule::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21364304);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkLSystemInnerRule::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21366944);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkLSystemInnerRule::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21350832);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkLSystemInnerRule::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21354816);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkLSystemInnerRule::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21359328);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkLSystemInnerRule::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21370240);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkLSystemInnerRule::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21366208);
    return classPtrDestroyFunc(lPtr);
}

