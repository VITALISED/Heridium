#include "gcwfcdecorationitem.meta.h"

void cGcWFCDecorationItem::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26922736);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCDecorationItem::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26927040);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcWFCDecorationItem::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928224);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcWFCDecorationItem::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26913456);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcWFCDecorationItem::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26918352);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcWFCDecorationItem::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26902160);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcWFCDecorationItem::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26904624);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcWFCDecorationItem::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26908896);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcWFCDecorationItem::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26919440);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcWFCDecorationItem::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26916864);
    return classPtrDestroyFunc(lPtr);
}

