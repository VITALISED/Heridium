#include "gcscaneventsolarsystemlookup.meta.h"

void cGcScanEventSolarSystemLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26312592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcScanEventSolarSystemLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313840);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcScanEventSolarSystemLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314496);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcScanEventSolarSystemLookup::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26304624);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcScanEventSolarSystemLookup::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26306864);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcScanEventSolarSystemLookup::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26294976);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcScanEventSolarSystemLookup::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26297632);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcScanEventSolarSystemLookup::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26300928);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcScanEventSolarSystemLookup::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26307888);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcScanEventSolarSystemLookup::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26305584);
    return classPtrDestroyFunc(lPtr);
}

