#include "gcinventorygenerationbasestatdata.meta.h"

void cGcInventoryGenerationBaseStatData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30464704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryGenerationBaseStatData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470480);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInventoryGenerationBaseStatData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472000);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInventoryGenerationBaseStatData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30454992);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInventoryGenerationBaseStatData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30460624);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInventoryGenerationBaseStatData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30442544);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInventoryGenerationBaseStatData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30445024);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInventoryGenerationBaseStatData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30449344);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInventoryGenerationBaseStatData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30461312);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInventoryGenerationBaseStatData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30459696);
    return classPtrDestroyFunc(lPtr);
}

