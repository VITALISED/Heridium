#include "gcecosystemcreaturedata.meta.h"

void cGcEcosystemCreatureData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27447152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcEcosystemCreatureData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcEcosystemCreatureData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453776);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

