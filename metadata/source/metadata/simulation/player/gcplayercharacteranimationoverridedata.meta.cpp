#include "gcplayercharacteranimationoverridedata.meta.h"

void cGcPlayerCharacterAnimationOverrideData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24717056);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerCharacterAnimationOverrideData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24720640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerCharacterAnimationOverrideData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24721840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

