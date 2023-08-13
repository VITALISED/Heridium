#include "gcspaceshipclasses.meta.h"

void cGcSpaceshipClasses::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26231520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceshipClasses::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceshipClasses::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

