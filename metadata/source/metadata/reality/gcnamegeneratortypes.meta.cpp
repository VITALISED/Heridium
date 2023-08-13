#include "gcnamegeneratortypes.meta.h"

void cGcNameGeneratorTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30353088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNameGeneratorTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNameGeneratorTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30358912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

