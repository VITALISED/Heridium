#include "tksceneboneremappingtable.meta.h"

void cTkSceneBoneRemappingTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21708848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSceneBoneRemappingTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711648);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkSceneBoneRemappingTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712928);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkSceneBoneRemappingTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21696784);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkSceneBoneRemappingTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21700064);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkSceneBoneRemappingTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21682160);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkSceneBoneRemappingTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21685600);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkSceneBoneRemappingTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21691040);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkSceneBoneRemappingTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21702336);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkSceneBoneRemappingTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21698912);
    return classPtrDestroyFunc(lPtr);
}

