#include "tkcreaturetailjoints.meta.h"

void cTkCreatureTailJoints::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22311248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkCreatureTailJoints::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkCreatureTailJoints::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315520);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

