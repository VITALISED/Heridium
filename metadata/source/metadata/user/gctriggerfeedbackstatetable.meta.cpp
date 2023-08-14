#include "gctriggerfeedbackstatetable.meta.h"

void cGcTriggerFeedbackStateTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22724944);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTriggerFeedbackStateTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22727024);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcTriggerFeedbackStateTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727712);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcTriggerFeedbackStateTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22716080);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcTriggerFeedbackStateTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22718208);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcTriggerFeedbackStateTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22706608);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcTriggerFeedbackStateTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22708752);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcTriggerFeedbackStateTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22712352);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcTriggerFeedbackStateTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22720576);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcTriggerFeedbackStateTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22717760);
    return classPtrDestroyFunc(lPtr);
}

