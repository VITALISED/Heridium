#include "gccostadvancesettlementbuilding.meta.h"

void cGcCostAdvanceSettlementBuilding::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30779232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostAdvanceSettlementBuilding::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784960);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786848);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30764368);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcCostAdvanceSettlementBuilding::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30750032);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30753856);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcCostAdvanceSettlementBuilding::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30758400);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcCostAdvanceSettlementBuilding::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30772800);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcCostAdvanceSettlementBuilding::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30768864);
    return classPtrDestroyFunc(lPtr);
}

