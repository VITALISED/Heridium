#include "gcpunctuationdelaydata.meta.h"

void cGcPunctuationDelayData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31422112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPunctuationDelayData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31425424);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPunctuationDelayData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31426688);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPunctuationDelayData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(31408032);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPunctuationDelayData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(31411920);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPunctuationDelayData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(31391104);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPunctuationDelayData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(31396816);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPunctuationDelayData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(31402080);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPunctuationDelayData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(31414592);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPunctuationDelayData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(31410288);
    return classPtrDestroyFunc(lPtr);
}

