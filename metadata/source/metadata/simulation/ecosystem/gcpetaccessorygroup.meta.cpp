#include "gcpetaccessorygroup.meta.h"

void cGcPetAccessoryGroup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27449056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetAccessoryGroup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetAccessoryGroup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

