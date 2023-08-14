#include "gcbiomefilelistoptions.meta.h"

void cGcBiomeFileListOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24117984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBiomeFileListOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123584);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBiomeFileListOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24124976);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBiomeFileListOptions::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24107440);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBiomeFileListOptions::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24113808);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBiomeFileListOptions::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24094576);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBiomeFileListOptions::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24097968);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBiomeFileListOptions::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24102496);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBiomeFileListOptions::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24114832);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBiomeFileListOptions::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24111568);
    return classPtrDestroyFunc(lPtr);
}

