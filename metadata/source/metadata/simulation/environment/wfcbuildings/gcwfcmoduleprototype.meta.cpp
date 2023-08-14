#include "gcwfcmoduleprototype.meta.h"

void cGcWFCModulePrototype::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26809696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCModulePrototype::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811536);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcWFCModulePrototype::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26812016);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcWFCModulePrototype::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26804656);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcWFCModulePrototype::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26807056);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcWFCModulePrototype::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26797600);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcWFCModulePrototype::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26799360);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcWFCModulePrototype::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26801808);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcWFCModulePrototype::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26807792);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcWFCModulePrototype::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26806096);
    return classPtrDestroyFunc(lPtr);
}

