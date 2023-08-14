#include "gcstatusmessagedefinitions.meta.h"

void cGcStatusMessageDefinitions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33121264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatusMessageDefinitions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33123616);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcStatusMessageDefinitions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124608);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcStatusMessageDefinitions::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33112048);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcStatusMessageDefinitions::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33114704);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcStatusMessageDefinitions::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33101104);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcStatusMessageDefinitions::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33103792);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcStatusMessageDefinitions::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33107648);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcStatusMessageDefinitions::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33116832);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcStatusMessageDefinitions::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33114048);
    return classPtrDestroyFunc(lPtr);
}

