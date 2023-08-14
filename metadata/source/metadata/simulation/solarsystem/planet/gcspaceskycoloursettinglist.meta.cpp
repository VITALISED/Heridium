#include "gcspaceskycoloursettinglist.meta.h"

void cGcSpaceSkyColourSettingList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23866880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceSkyColourSettingList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23869472);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSpaceSkyColourSettingList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23870512);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSpaceSkyColourSettingList::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23855984);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSpaceSkyColourSettingList::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23858512);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSpaceSkyColourSettingList::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23843328);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSpaceSkyColourSettingList::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23846960);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSpaceSkyColourSettingList::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23851472);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSpaceSkyColourSettingList::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23861232);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSpaceSkyColourSettingList::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23857792);
    return classPtrDestroyFunc(lPtr);
}

