#include "gcspawncomponentoption.meta.h"

void cGcSpawnComponentOption::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27451840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpawnComponentOption::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453600);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSpawnComponentOption::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454496);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSpawnComponentOption::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(27440720);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSpawnComponentOption::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(27443248);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSpawnComponentOption::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(27427808);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSpawnComponentOption::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(27432368);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSpawnComponentOption::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(27436384);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSpawnComponentOption::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(27446096);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSpawnComponentOption::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(27442208);
    return classPtrDestroyFunc(lPtr);
}

