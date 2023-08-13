#include "gccreaturestupidname.meta.h"

void cGcCreatureStupidName::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27875744);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureStupidName::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27879136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureStupidName::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27880320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

