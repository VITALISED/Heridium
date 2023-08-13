#include "gcbuildingsystemtypeenum.meta.h"

void cGcBuildingSystemTypeEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27339376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBuildingSystemTypeEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBuildingSystemTypeEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

