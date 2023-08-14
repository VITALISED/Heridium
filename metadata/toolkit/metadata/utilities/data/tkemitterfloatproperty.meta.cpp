#include "tkemitterfloatproperty.meta.h"

void cTkEmitterFloatProperty::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21371312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkEmitterFloatProperty::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21377824);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkEmitterFloatProperty::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379328);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkEmitterFloatProperty::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21360896);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkEmitterFloatProperty::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21366576);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkEmitterFloatProperty::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21348880);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkEmitterFloatProperty::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21351808);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkEmitterFloatProperty::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21356288);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkEmitterFloatProperty::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21368352);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkEmitterFloatProperty::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21365440);
    return classPtrDestroyFunc(lPtr);
}

