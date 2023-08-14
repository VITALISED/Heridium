#include "gcgenericmissionstage.meta.h"

void cGcGenericMissionStage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25651440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGenericMissionStage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654336);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcGenericMissionStage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655648);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcGenericMissionStage::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(25643104);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcGenericMissionStage::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(25646336);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcGenericMissionStage::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(25632736);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcGenericMissionStage::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(25635280);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcGenericMissionStage::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(25638912);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcGenericMissionStage::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(25647616);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcGenericMissionStage::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(25645520);
    return classPtrDestroyFunc(lPtr);
}

