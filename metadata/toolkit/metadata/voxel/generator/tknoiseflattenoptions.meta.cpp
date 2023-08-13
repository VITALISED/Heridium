#include "tknoiseflattenoptions.meta.h"

void cTkNoiseFlattenOptions::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20974576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseFlattenOptions::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20978880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseFlattenOptions::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20979968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

