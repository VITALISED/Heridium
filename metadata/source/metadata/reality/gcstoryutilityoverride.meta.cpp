#include "gcstoryutilityoverride.meta.h"

void cGcStoryUtilityOverride::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29339472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStoryUtilityOverride::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStoryUtilityOverride::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

