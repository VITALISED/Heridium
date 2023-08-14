#include "gcbackgroundspaceencounterinfo.meta.h"

void cGcBackgroundSpaceEncounterInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23382768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBackgroundSpaceEncounterInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23390016);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23391456);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23372928);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23380160);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcBackgroundSpaceEncounterInfo::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23360256);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23362816);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcBackgroundSpaceEncounterInfo::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23368000);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcBackgroundSpaceEncounterInfo::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23381488);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcBackgroundSpaceEncounterInfo::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23378608);
    return classPtrDestroyFunc(lPtr);
}

