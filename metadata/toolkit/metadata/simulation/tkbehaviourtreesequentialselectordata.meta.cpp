#include "tkbehaviourtreesequentialselectordata.meta.h"

void cTkBehaviourTreeSequentialSelectorData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21703488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBehaviourTreeSequentialSelectorData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710208);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712064);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21692496);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21699648);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkBehaviourTreeSequentialSelectorData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21679936);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21682960);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkBehaviourTreeSequentialSelectorData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21687216);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkBehaviourTreeSequentialSelectorData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21700368);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkBehaviourTreeSequentialSelectorData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21697984);
    return classPtrDestroyFunc(lPtr);
}

