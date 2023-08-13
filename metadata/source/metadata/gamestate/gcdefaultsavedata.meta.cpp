#include "gcdefaultsavedata.meta.h"

void cGcDefaultSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33941808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDefaultSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33952544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDefaultSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33953712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

