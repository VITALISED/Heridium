#include "gcproceduraltechnologydata.meta.h"

void cGcProceduralTechnologyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30214352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralTechnologyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30219728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralTechnologyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

