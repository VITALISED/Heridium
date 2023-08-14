#include "tksketchnodeconnections.meta.h"

void cTkSketchNodeConnections::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21485920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkSketchNodeConnections::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21488752);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkSketchNodeConnections::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21489760);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkSketchNodeConnections::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21476640);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkSketchNodeConnections::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21479808);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkSketchNodeConnections::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21466112);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkSketchNodeConnections::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21468704);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkSketchNodeConnections::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21472656);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkSketchNodeConnections::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21481856);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkSketchNodeConnections::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21478880);
    return classPtrDestroyFunc(lPtr);
}

