#include "gctechnologyrequirement.meta.h"

void cGcTechnologyRequirement::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29187184);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTechnologyRequirement::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29191008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTechnologyRequirement::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29191952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

