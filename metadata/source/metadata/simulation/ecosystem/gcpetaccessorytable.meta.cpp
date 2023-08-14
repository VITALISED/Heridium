#include "gcpetaccessorytable.meta.h"

void cGcPetAccessoryTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27449632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetAccessoryTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453040);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPetAccessoryTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454160);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPetAccessoryTable::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27439024);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPetAccessoryTable::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27442704);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPetAccessoryTable::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27427168);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPetAccessoryTable::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27430016);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPetAccessoryTable::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27434816);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPetAccessoryTable::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27445168);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPetAccessoryTable::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27441712);
    return classPtrDestroyFunc(lPtr);
}

