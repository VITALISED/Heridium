#include "tknoiseuberdata.meta.h"

void cTkNoiseUberData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20977664);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseUberData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20979520);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseUberData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20980352);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

