#include "gcnpcproptable.meta.h"

void cGcNPCPropTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24953840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCPropTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24956288);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcNPCPropTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24957296);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcNPCPropTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24941104);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcNPCPropTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24945296);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcNPCPropTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24925056);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcNPCPropTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24930192);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcNPCPropTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24935344);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcNPCPropTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24947072);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcNPCPropTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24943184);
    return classPtrDestroyFunc(lPtr);
}

