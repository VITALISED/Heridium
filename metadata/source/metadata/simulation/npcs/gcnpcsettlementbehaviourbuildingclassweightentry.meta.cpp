#include "gcnpcsettlementbehaviourbuildingclassweightentry.meta.h"

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24842288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846304);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847312);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24833680);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24837936);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24825312);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24826944);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24830000);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24839616);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcNPCSettlementBehaviourBuildingClassWeightEntry::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24836560);
    return classPtrDestroyFunc(lPtr);
}

