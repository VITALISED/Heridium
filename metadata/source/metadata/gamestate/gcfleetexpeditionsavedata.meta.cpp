#include "gcfleetexpeditionsavedata.meta.h"

void cGcFleetExpeditionSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33948768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFleetExpeditionSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33952704);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcFleetExpeditionSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33953808);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcFleetExpeditionSaveData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33930784);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcFleetExpeditionSaveData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33935696);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcFleetExpeditionSaveData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33901600);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcFleetExpeditionSaveData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33910192);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcFleetExpeditionSaveData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33920528);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcFleetExpeditionSaveData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33938592);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcFleetExpeditionSaveData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33933984);
    return classPtrDestroyFunc(lPtr);
}

