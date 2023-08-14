#include "gcdungeonquestparams.meta.h"

void cGcDungeonQuestParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26600160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDungeonQuestParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603568);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcDungeonQuestParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604480);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcDungeonQuestParams::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26591568);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcDungeonQuestParams::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26595168);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcDungeonQuestParams::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26581456);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcDungeonQuestParams::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26584096);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcDungeonQuestParams::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26587632);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcDungeonQuestParams::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26596016);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcDungeonQuestParams::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26594128);
    return classPtrDestroyFunc(lPtr);
}

