#include "gcdefaultmissionsubstanceenum.meta.h"

void cGcDefaultMissionSubstanceEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25649648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultMissionSubstanceEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25654096);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcDefaultMissionSubstanceEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25655504);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcDefaultMissionSubstanceEnum::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(25641808);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcDefaultMissionSubstanceEnum::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcDefaultMissionSubstanceEnum::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(25632512);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcDefaultMissionSubstanceEnum::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(25634208);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcDefaultMissionSubstanceEnum::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(25637616);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcDefaultMissionSubstanceEnum::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(25647088);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcDefaultMissionSubstanceEnum::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(25645344);
    return classPtrDestroyFunc(lPtr);
}

