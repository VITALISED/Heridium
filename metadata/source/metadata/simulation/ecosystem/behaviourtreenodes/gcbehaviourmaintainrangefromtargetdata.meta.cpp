#include "gcbehaviourmaintainrangefromtargetdata.meta.h"

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28286864);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBehaviourMaintainRangeFromTargetData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28291968);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28293472);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(28272976);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(28278000);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBehaviourMaintainRangeFromTargetData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(28258288);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(28261776);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBehaviourMaintainRangeFromTargetData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(28266864);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBehaviourMaintainRangeFromTargetData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(28281680);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBehaviourMaintainRangeFromTargetData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(28276640);
    return classPtrDestroyFunc(lPtr);
}

