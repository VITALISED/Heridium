#include "gcexternalobjectfilelist.meta.h"

void cGcExternalObjectFileList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24119072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExternalObjectFileList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24123904);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcExternalObjectFileList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24125168);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcExternalObjectFileList::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(24108416);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcExternalObjectFileList::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(24113872);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcExternalObjectFileList::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(24094832);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcExternalObjectFileList::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(24098736);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcExternalObjectFileList::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(24103376);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcExternalObjectFileList::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(24114960);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcExternalObjectFileList::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(24111808);
    return classPtrDestroyFunc(lPtr);
}

