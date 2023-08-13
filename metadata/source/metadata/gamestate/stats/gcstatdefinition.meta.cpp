#include "gcstatdefinition.meta.h"

void cGcStatDefinition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33021248);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatDefinition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatDefinition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

