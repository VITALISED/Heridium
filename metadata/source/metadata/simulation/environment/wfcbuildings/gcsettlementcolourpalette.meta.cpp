#include "gcsettlementcolourpalette.meta.h"

void cGcSettlementColourPalette::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26921840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementColourPalette::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26926800);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cGcSettlementColourPalette::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928080);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cGcSettlementColourPalette::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(26912688);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cGcSettlementColourPalette::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(26918096);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cGcSettlementColourPalette::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(26901712);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cGcSettlementColourPalette::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(26903984);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cGcSettlementColourPalette::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(26908208);
    return classPtrCreateFunc(result);
}

unsigned __int64 cGcSettlementColourPalette::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(26919344);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cGcSettlementColourPalette::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(26916592);
    return classPtrDestroyFunc(lPtr);
}

