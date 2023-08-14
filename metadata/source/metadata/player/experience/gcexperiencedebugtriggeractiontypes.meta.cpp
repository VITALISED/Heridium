#include "gcexperiencedebugtriggeractiontypes.meta.h"

void cGcExperienceDebugTriggerActionTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30894304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExperienceDebugTriggerActionTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897472);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898240);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30888112);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcExperienceDebugTriggerActionTypes::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30878848);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30880992);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcExperienceDebugTriggerActionTypes::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30884640);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcExperienceDebugTriggerActionTypes::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30891840);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcExperienceDebugTriggerActionTypes::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30890448);
    return classPtrDestroyFunc(lPtr);
}

