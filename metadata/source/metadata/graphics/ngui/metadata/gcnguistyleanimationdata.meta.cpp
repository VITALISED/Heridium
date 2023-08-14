#include "gcnguistyleanimationdata.meta.h"

void cGcNGuiStyleAnimationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31120544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiStyleAnimationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124144);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcNGuiStyleAnimationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125360);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcNGuiStyleAnimationData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31108416);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcNGuiStyleAnimationData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31113504);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcNGuiStyleAnimationData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31096256);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcNGuiStyleAnimationData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31099472);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcNGuiStyleAnimationData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31103600);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcNGuiStyleAnimationData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31115568);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcNGuiStyleAnimationData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31111216);
    return classPtrDestroyFunc(lPtr);
}

