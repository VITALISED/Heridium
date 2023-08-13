#include "gcplayanimaction.meta.h"

void cGcPlayAnimAction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28492432);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayAnimAction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28496000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayAnimAction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28497392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

