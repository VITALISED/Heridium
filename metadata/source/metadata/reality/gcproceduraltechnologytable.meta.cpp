#include "gcproceduraltechnologytable.meta.h"

void cGcProceduralTechnologyTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30214976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralTechnologyTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30219888);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcProceduralTechnologyTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221120);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcProceduralTechnologyTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30204688);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcProceduralTechnologyTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30209856);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcProceduralTechnologyTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30193488);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcProceduralTechnologyTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30196224);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcProceduralTechnologyTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30200384);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcProceduralTechnologyTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30211552);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcProceduralTechnologyTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30208512);
    return classPtrDestroyFunc(lPtr);
}

