#include "tknoisevoxeltypeenum.meta.h"

void cTkNoiseVoxelTypeEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(20914752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNoiseVoxelTypeEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(20916736);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNoiseVoxelTypeEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(20917216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

