#include "gcheavyairsettingvalues.meta.h"

void cGcHeavyAirSettingValues::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23988192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHeavyAirSettingValues::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23995408);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcHeavyAirSettingValues::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23996688);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcHeavyAirSettingValues::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23978880);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcHeavyAirSettingValues::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23985056);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcHeavyAirSettingValues::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23966816);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcHeavyAirSettingValues::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23969200);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcHeavyAirSettingValues::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23974048);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcHeavyAirSettingValues::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23986560);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcHeavyAirSettingValues::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23984208);
    return classPtrDestroyFunc(lPtr);
}

