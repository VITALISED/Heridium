#include "gcecosystemcreaturedata.meta.h"

void cGcEcosystemCreatureData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27447152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEcosystemCreatureData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452400);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcEcosystemCreatureData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453776);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcEcosystemCreatureData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27437136);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcEcosystemCreatureData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27442400);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcEcosystemCreatureData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27426432);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcEcosystemCreatureData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27428432);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcEcosystemCreatureData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27433072);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcEcosystemCreatureData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27443920);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcEcosystemCreatureData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27441232);
    return classPtrDestroyFunc(lPtr);
}

