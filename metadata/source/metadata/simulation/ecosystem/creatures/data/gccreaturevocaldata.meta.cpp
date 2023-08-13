#include "gccreaturevocaldata.meta.h"

void cGcCreatureVocalData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27954096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureVocalData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27956576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureVocalData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27957136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

