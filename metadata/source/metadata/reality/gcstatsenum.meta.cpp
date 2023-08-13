#include "gcstatsenum.meta.h"

void cGcStatsEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29338832);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341728);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

