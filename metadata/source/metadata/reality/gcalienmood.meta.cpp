#include "gcalienmood.meta.h"

void cGcAlienMood::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30892608);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAlienMood::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30896992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAlienMood::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30897952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

