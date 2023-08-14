#include "gcheavyairsetting.meta.h"

void cGcHeavyAirSetting::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24120400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHeavyAirSetting::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24124224);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcHeavyAirSetting::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125360);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcHeavyAirSetting::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24109440);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcHeavyAirSetting::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24114192);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcHeavyAirSetting::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24095376);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcHeavyAirSetting::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24099664);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcHeavyAirSetting::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24104336);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcHeavyAirSetting::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24115648);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcHeavyAirSetting::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24112192);
    return classPtrDestroyFunc(lPtr);
}

