#include "gcdifficultystatedata.meta.h"

void cGcDifficultyStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22844688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultyStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22847872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultyStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22848896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

