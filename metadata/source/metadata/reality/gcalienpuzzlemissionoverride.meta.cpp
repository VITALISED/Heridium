#include "gcalienpuzzlemissionoverride.meta.h"

void cGcAlienPuzzleMissionOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30893440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienPuzzleMissionOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30897232);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienPuzzleMissionOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30898096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

