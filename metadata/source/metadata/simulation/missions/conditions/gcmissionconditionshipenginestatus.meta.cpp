#include "gcmissionconditionshipenginestatus.meta.h"

void cGcMissionConditionShipEngineStatus::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25798464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionConditionShipEngineStatus::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25802720);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMissionConditionShipEngineStatus::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25804352);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMissionConditionShipEngineStatus::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(25784560);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMissionConditionShipEngineStatus::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMissionConditionShipEngineStatus::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(25770928);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMissionConditionShipEngineStatus::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(25774032);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMissionConditionShipEngineStatus::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(25778784);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMissionConditionShipEngineStatus::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(25792256);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMissionConditionShipEngineStatus::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(25787648);
    return classPtrDestroyFunc(lPtr);
}

