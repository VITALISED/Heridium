#include "gcdifficultyfueluseoptiondata.meta.h"

void cGcDifficultyFuelUseOptionData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22956176);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDifficultyFuelUseOptionData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22958528);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDifficultyFuelUseOptionData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22959232);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

