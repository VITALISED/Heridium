#include "tkcreaturetailparams.meta.h"

void cTkCreatureTailParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22311520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkCreatureTailParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkCreatureTailParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315568);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

