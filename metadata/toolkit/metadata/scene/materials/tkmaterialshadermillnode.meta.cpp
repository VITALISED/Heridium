#include "tkmaterialshadermillnode.meta.h"

void cTkMaterialShaderMillNode::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21813248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkMaterialShaderMillNode::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21815120);
    return classPtrSaveFunc(lPtr, lpacFilename);
}

void cTkMaterialShaderMillNode::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21816112);
    return classPtrWriteFunc(lPtr, lDataNode, lbForceShortForm);
}

void cTkMaterialShaderMillNode::ClassPointerCreateDefault(cTkClassPointer *lPtr, cTkLinearMemoryPool *lpAllocator)
{
    __HERIDIUM_ClassPointerCreateDefault classPtrDefaultFunc = (__HERIDIUM_ClassPointerCreateDefault)__HERIDIUM_OFFSET(21806224);
    return classPtrDefaultFunc(lPtr, lpAllocator);
}

void cTkMaterialShaderMillNode::ClassPointerFix(cTkClassPointer *lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset)
{
    __HERIDIUM_ClassPointerFix classPtrFixFunc = (__HERIDIUM_ClassPointerFix)__HERIDIUM_OFFSET(21808752);
    return classPtrFixFunc(lPtr, lbFixUp, liDynamicOffset);
}

bool cTkMaterialShaderMillNode::ClassPointerCompare(const cTkClassPointer *lPtr, const cTkClassPointer *lOtherPtr)
{
    __HERIDIUM_ClassPointerCompare classPtrEqualsFunc = (__HERIDIUM_ClassPointerCompare)__HERIDIUM_OFFSET(21797648);
    return classPtrEqualsFunc(lPtr, lOtherPtr);
}

void cTkMaterialShaderMillNode::ClassPointerCopy(cTkClassPointer *lDest, const cTkClassPointer *lSource)
{
    __HERIDIUM_ClassPointerCopy classPtrCopyFunc = (__HERIDIUM_ClassPointerCopy)__HERIDIUM_OFFSET(21800144);
    return classPtrCopyFunc(lDest, lSource);
}

cTkClassPointer* cTkMaterialShaderMillNode::ClassPointerCreate(cTkClassPointer *result)
{
    __HERIDIUM_ClassPointerCreate classPtrCreateFunc = (__HERIDIUM_ClassPointerCreate)__HERIDIUM_OFFSET(21803072);
    return classPtrCreateFunc(result);
}

unsigned __int64 cTkMaterialShaderMillNode::ClassPointerGenerateHash(const cTkClassPointer *lPtr, unsigned __int64 luHash, bool lbDeep)
{
    __HERIDIUM_ClassPointerGenerateHash classPtrHashFunc = (__HERIDIUM_ClassPointerGenerateHash)__HERIDIUM_OFFSET(21809488);
    return classPtrHashFunc(lPtr, luHash, lbDeep);
}

void cTkMaterialShaderMillNode::ClassPointerDestroy(cTkClassPointer* lPtr)
{
    __HERIDIUM_ClassPointerDestroy classPtrDestroyFunc = (__HERIDIUM_ClassPointerDestroy)__HERIDIUM_OFFSET(21807648);
    return classPtrDestroyFunc(lPtr);
}

