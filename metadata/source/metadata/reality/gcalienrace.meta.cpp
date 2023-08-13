#include "gcalienrace.meta.h"

void cGcAlienRace::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30776512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienRace::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784240);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienRace::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

