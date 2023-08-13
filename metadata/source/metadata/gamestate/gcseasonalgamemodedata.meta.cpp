#include "gcseasonalgamemodedata.meta.h"

void cGcSeasonalGameModeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33343360);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonalGameModeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33346992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonalGameModeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

