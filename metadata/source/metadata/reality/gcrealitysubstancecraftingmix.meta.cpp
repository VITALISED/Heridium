#include "gcrealitysubstancecraftingmix.meta.h"

void cGcRealitySubstanceCraftingMix::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30100752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRealitySubstanceCraftingMix::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30101648);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcRealitySubstanceCraftingMix::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30101920);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcRealitySubstanceCraftingMix::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30094976);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcRealitySubstanceCraftingMix::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(1578992);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcRealitySubstanceCraftingMix::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30082528);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcRealitySubstanceCraftingMix::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30086480);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcRealitySubstanceCraftingMix::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30090768);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcRealitySubstanceCraftingMix::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30096064);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcRealitySubstanceCraftingMix::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30095552);
    return classPtrDestroyFunc(lPtr);
}

