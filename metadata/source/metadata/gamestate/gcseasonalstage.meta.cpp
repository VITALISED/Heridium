#include "gcseasonalstage.meta.h"

void cGcSeasonalStage::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33346224);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSeasonalStage::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33347392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSeasonalStage::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33347904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

