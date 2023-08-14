#include "tkproceduralmodelcomponentdata.meta.h"

void cTkProceduralModelComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22242688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkProceduralModelComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246608);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkProceduralModelComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247728);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkProceduralModelComponentData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22233840);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkProceduralModelComponentData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22238240);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkProceduralModelComponentData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22223808);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkProceduralModelComponentData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22226608);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkProceduralModelComponentData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22230096);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkProceduralModelComponentData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22239888);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkProceduralModelComponentData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22236960);
    return classPtrDestroyFunc(lPtr);
}

