#include "gcnamegeneratorsectortypes.meta.h"

void cGcNameGeneratorSectorTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30352768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNameGeneratorSectorTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNameGeneratorSectorTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358864);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

