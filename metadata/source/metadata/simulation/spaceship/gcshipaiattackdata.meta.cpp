#include "gcshipaiattackdata.meta.h"

void cGcShipAIAttackData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23555712);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAIAttackData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23557216);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcShipAIAttackData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23557792);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcShipAIAttackData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23549328);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcShipAIAttackData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcShipAIAttackData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23538784);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcShipAIAttackData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23541856);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcShipAIAttackData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23545440);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcShipAIAttackData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23551888);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcShipAIAttackData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23550544);
    return classPtrDestroyFunc(lPtr);
}

