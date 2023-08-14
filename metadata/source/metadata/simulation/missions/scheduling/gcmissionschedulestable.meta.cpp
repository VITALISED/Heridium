#include "gcmissionschedulestable.meta.h"

void cGcMissionSchedulesTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25531168);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMissionSchedulesTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25537792);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMissionSchedulesTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25539456);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMissionSchedulesTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(25519808);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMissionSchedulesTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(25525376);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMissionSchedulesTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(25504064);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMissionSchedulesTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(25508480);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMissionSchedulesTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(25514640);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMissionSchedulesTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(25527376);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMissionSchedulesTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(25524224);
    return classPtrDestroyFunc(lPtr);
}

