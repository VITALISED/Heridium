#include "gcleveledstatdata.meta.h"

void cGcLeveledStatData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33019840);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLeveledStatData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLeveledStatData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

