#include "gcinventorylayoutgenerationbounds.meta.h"

void cGcInventoryLayoutGenerationBounds::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30465264);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventoryLayoutGenerationBounds::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30470640);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30472096);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30455488);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInventoryLayoutGenerationBounds::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30442672);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30445344);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInventoryLayoutGenerationBounds::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30449808);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInventoryLayoutGenerationBounds::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30461376);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInventoryLayoutGenerationBounds::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30459888);
    return classPtrDestroyFunc(lPtr);
}

