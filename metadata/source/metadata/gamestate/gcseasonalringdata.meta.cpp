#include "gcseasonalringdata.meta.h"

void cGcSeasonalRingData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33345920);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonalRingData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33347312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonalRingData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

