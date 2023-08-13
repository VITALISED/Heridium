#include "gcstatsvaluetypes.meta.h"

void cGcStatsValueTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33024592);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsValueTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33026432);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsValueTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

