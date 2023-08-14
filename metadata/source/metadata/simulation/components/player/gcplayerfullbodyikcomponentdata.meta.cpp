#include "gcplayerfullbodyikcomponentdata.meta.h"

void cGcPlayerFullBodyIKComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28691968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerFullBodyIKComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28694352);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcPlayerFullBodyIKComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28695040);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcPlayerFullBodyIKComponentData::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(28684784);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcPlayerFullBodyIKComponentData::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(28687520);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcPlayerFullBodyIKComponentData::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(28676208);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcPlayerFullBodyIKComponentData::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(28678320);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcPlayerFullBodyIKComponentData::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(28681664);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcPlayerFullBodyIKComponentData::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(28689232);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcPlayerFullBodyIKComponentData::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(28686864);
    return classPtrDestroyFunc(lPtr);
}

