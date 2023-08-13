#include "tkcavesenum.meta.h"

void cTkCavesEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20972496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkCavesEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkCavesEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979680);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

