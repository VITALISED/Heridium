#include "gcshipaicombatdefinition.meta.h"

void cGcShipAICombatDefinition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23475552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAICombatDefinition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480752);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcShipAICombatDefinition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481968);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcShipAICombatDefinition::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(23464768);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcShipAICombatDefinition::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(23468832);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcShipAICombatDefinition::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(23453376);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcShipAICombatDefinition::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(23456064);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcShipAICombatDefinition::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(23460112);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcShipAICombatDefinition::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(23471712);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcShipAICombatDefinition::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(23468048);
    return classPtrDestroyFunc(lPtr);
}

