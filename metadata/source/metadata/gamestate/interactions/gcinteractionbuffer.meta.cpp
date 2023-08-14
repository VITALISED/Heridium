#include "gcinteractionbuffer.meta.h"

void cGcInteractionBuffer::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33117552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionBuffer::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33122656);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInteractionBuffer::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124032);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInteractionBuffer::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33109168);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInteractionBuffer::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33114240);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInteractionBuffer::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33100032);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInteractionBuffer::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33101632);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInteractionBuffer::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33104976);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInteractionBuffer::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33115424);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInteractionBuffer::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33113264);
    return classPtrDestroyFunc(lPtr);
}

