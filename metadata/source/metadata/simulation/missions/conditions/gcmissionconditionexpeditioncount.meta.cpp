#include "gcmissionconditionexpeditioncount.meta.h"

void cGcMissionConditionExpeditionCount::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26156064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionExpeditionCount::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26159056);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMissionConditionExpeditionCount::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26160544);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMissionConditionExpeditionCount::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26140928);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMissionConditionExpeditionCount::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26143328);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMissionConditionExpeditionCount::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26126848);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMissionConditionExpeditionCount::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26130048);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMissionConditionExpeditionCount::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26135072);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMissionConditionExpeditionCount::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26148800);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMissionConditionExpeditionCount::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26142688);
    return classPtrDestroyFunc(lPtr);
}

