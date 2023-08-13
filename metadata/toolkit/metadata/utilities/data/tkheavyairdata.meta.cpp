#include "tkheavyairdata.meta.h"

void cTkHeavyAirData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21372560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkHeavyAirData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378064);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkHeavyAirData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379472);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

