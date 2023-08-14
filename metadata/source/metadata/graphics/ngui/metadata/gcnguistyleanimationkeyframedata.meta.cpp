#include "gcnguistyleanimationkeyframedata.meta.h"

void cGcNGuiStyleAnimationKeyframeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31120880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNGuiStyleAnimationKeyframeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124224);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125408);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31108656);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31113872);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcNGuiStyleAnimationKeyframeData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31096512);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31099744);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcNGuiStyleAnimationKeyframeData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31103824);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcNGuiStyleAnimationKeyframeData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31115600);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcNGuiStyleAnimationKeyframeData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31111296);
    return classPtrDestroyFunc(lPtr);
}

