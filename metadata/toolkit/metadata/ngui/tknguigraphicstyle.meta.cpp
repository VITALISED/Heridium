#include "tknguigraphicstyle.meta.h"

void cTkNGuiGraphicStyle::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22048976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiGraphicStyle::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22053040);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkNGuiGraphicStyle::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054192);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkNGuiGraphicStyle::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(22039360);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkNGuiGraphicStyle::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(22043632);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkNGuiGraphicStyle::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(22025792);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkNGuiGraphicStyle::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(22029008);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkNGuiGraphicStyle::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(22034592);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkNGuiGraphicStyle::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(22045424);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkNGuiGraphicStyle::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(22042752);
    return classPtrDestroyFunc(lPtr);
}

