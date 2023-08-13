#include "gcspaceshipshielddata.meta.h"

void cGcSpaceshipShieldData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23644288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceshipShieldData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23645536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceshipShieldData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23646240);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

