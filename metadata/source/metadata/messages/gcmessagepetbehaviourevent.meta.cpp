#include "gcmessagepetbehaviourevent.meta.h"

void cGcMessagePetBehaviourEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30995648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessagePetBehaviourEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999776);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMessagePetBehaviourEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31001008);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMessagePetBehaviourEvent::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30984176);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMessagePetBehaviourEvent::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30988304);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMessagePetBehaviourEvent::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30972400);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMessagePetBehaviourEvent::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30975520);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMessagePetBehaviourEvent::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30979376);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMessagePetBehaviourEvent::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30989760);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMessagePetBehaviourEvent::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30987200);
    return classPtrDestroyFunc(lPtr);
}

