#include "gcstatsoneshottypes.meta.h"

void cGcStatsOneShotTypes::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33024272);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatsOneShotTypes::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33026352);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatsOneShotTypes::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027376);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

