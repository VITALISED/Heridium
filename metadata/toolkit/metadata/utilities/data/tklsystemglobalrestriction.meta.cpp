#include "tklsystemglobalrestriction.meta.h"

void cTkLSystemGlobalRestriction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21375632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemGlobalRestriction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378704);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkLSystemGlobalRestriction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379856);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkLSystemGlobalRestriction::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21363792);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkLSystemGlobalRestriction::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21366848);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkLSystemGlobalRestriction::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21350336);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkLSystemGlobalRestriction::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21354304);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkLSystemGlobalRestriction::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21358864);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkLSystemGlobalRestriction::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21369728);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkLSystemGlobalRestriction::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21366048);
    return classPtrDestroyFunc(lPtr);
}

