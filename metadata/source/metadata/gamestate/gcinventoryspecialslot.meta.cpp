#include "gcinventoryspecialslot.meta.h"

void cGcInventorySpecialSlot::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33951792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInventorySpecialSlot::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33953344);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcInventorySpecialSlot::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33954192);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcInventorySpecialSlot::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(33932976);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcInventorySpecialSlot::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(33937152);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcInventorySpecialSlot::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(33902272);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcInventorySpecialSlot::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(33912480);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcInventorySpecialSlot::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(33922576);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcInventorySpecialSlot::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(33939648);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcInventorySpecialSlot::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(33934464);
    return classPtrDestroyFunc(lPtr);
}

