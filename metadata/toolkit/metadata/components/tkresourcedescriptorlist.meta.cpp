#include "tkresourcedescriptorlist.meta.h"

void cTkResourceDescriptorList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22243856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkResourceDescriptorList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22246928);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkResourceDescriptorList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22247920);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkResourceDescriptorList::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22234848);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkResourceDescriptorList::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22238416);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkResourceDescriptorList::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22224400);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkResourceDescriptorList::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22227424);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkResourceDescriptorList::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22231008);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkResourceDescriptorList::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22240800);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkResourceDescriptorList::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22237328);
    return classPtrDestroyFunc(lPtr);
}

