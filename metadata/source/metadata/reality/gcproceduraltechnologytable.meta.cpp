#include "gcproceduraltechnologytable.meta.h"

void cGcProceduralTechnologyTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30214976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralTechnologyTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30219888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralTechnologyTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30221120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

