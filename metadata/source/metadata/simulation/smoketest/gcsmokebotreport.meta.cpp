#include "gcsmokebotreport.meta.h"

void cGcSmokeBotReport::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24230720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSmokeBotReport::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24234368);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSmokeBotReport::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24235440);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSmokeBotReport::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24220624);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSmokeBotReport::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24224752);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSmokeBotReport::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24207152);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSmokeBotReport::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24210608);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSmokeBotReport::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24215344);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSmokeBotReport::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24226000);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSmokeBotReport::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24223728);
    return classPtrDestroyFunc(lPtr);
}

