#include "gcmessagenpcbehaviourevent.meta.h"

void cGcMessageNPCBehaviourEvent::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30994992);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMessageNPCBehaviourEvent::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30999696);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcMessageNPCBehaviourEvent::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31000960);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcMessageNPCBehaviourEvent::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(30983840);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcMessageNPCBehaviourEvent::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(30988256);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcMessageNPCBehaviourEvent::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(30972080);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcMessageNPCBehaviourEvent::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(30975280);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcMessageNPCBehaviourEvent::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(30979104);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcMessageNPCBehaviourEvent::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(30989728);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcMessageNPCBehaviourEvent::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(30987152);
    return classPtrDestroyFunc(lPtr);
}

