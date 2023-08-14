#include "gcaishipspawnmarkerdata.meta.h"

void cGcAIShipSpawnMarkerData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23759584);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAIShipSpawnMarkerData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23765120);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcAIShipSpawnMarkerData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23766416);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcAIShipSpawnMarkerData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23748832);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcAIShipSpawnMarkerData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23754160);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcAIShipSpawnMarkerData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23736208);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcAIShipSpawnMarkerData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23739648);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcAIShipSpawnMarkerData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23744672);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcAIShipSpawnMarkerData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23755744);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcAIShipSpawnMarkerData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23752992);
    return classPtrDestroyFunc(lPtr);
}

