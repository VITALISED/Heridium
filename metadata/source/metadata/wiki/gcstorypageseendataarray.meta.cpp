#include "gcstorypageseendataarray.meta.h"

void cGcStoryPageSeenDataArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22628736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStoryPageSeenDataArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22632512);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcStoryPageSeenDataArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633664);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcStoryPageSeenDataArray::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22617488);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcStoryPageSeenDataArray::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22622224);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcStoryPageSeenDataArray::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22604272);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcStoryPageSeenDataArray::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22607504);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcStoryPageSeenDataArray::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22612240);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcStoryPageSeenDataArray::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22624480);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcStoryPageSeenDataArray::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22621088);
    return classPtrDestroyFunc(lPtr);
}

