#include "gcinworlduiscreendata.meta.h"

void cGcInWorldUIScreenData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23066352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInWorldUIScreenData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23069664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInWorldUIScreenData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

