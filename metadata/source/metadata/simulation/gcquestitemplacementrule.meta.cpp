#include "gcquestitemplacementrule.meta.h"

void cGcQuestItemPlacementRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26308896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcQuestItemPlacementRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26313040);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcQuestItemPlacementRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26314016);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcQuestItemPlacementRule::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26301696);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcQuestItemPlacementRule::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26305776);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcQuestItemPlacementRule::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26293600);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcQuestItemPlacementRule::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26295424);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcQuestItemPlacementRule::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26298304);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcQuestItemPlacementRule::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26307376);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcQuestItemPlacementRule::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26304992);
    return classPtrDestroyFunc(lPtr);
}

